const VideoPlayerWEBGLPlugin = {
  $variables: {
    videos: {},
    eventHandles: {}
  },
  // ALERT: Do not duplicate textures in Unity, the pointer will the same!
  // It causes inconsistent behavior
  $textureUpdate: function(videoId,pointer)
  {
    console.log("textureUpdate", videoId, pointer)
    if(!variables.videos[videoId]) false;

        GLctx.deleteTexture(GL.textures[pointer]);
        var t = GLctx.createTexture();
        t.name = pointer;
        GL.textures[pointer] = t;
        GLctx.bindTexture(GLctx.TEXTURE_2D, GL.textures[pointer]);

        
        GLctx.texParameteri(
          GLctx.TEXTURE_2D,
          GLctx.TEXTURE_WRAP_S,
          GLctx.CLAMP_TO_EDGE
        );
        GLctx.texParameteri(
          GLctx.TEXTURE_2D,
          GLctx.TEXTURE_WRAP_T,
          GLctx.CLAMP_TO_EDGE
        );
        GLctx.texParameteri(
          GLctx.TEXTURE_2D,
          GLctx.TEXTURE_MIN_FILTER,
          GLctx.LINEAR
        ); 

        GLctx.pixelStorei(GLctx.UNPACK_FLIP_Y_WEBGL, true);
        GLctx.texImage2D(
          GLctx.TEXTURE_2D,
          0,
          GLctx.RGBA, GLctx.RGBA,
          GLctx.UNSIGNED_BYTE,
          variables.videos[videoId].instance
        );
        GLctx.pixelStorei(GLctx.UNPACK_FLIP_Y_WEBGL, false);


  },
  textureUpdate_VideoPlayerWEBGL: function(...args){
    return textureUpdate(...args)
  },
  destroy_VideoPlayerWEBGL: function(...args){
    return destroy(...args)
  },
  createVideoFromSources_VideoPlayerWEBGL: function (id, url,texturePtr,loop) {
    const videoUrl = UTF8ToString(url);
    const videoId = UTF8ToString(id);
    destroy(id);

    variables.videos[videoId] = {isReady: false};

    const video = document.createElement("video");
    video.style.display = "none";
    video.id=videoId;
       
    video.controls=true;
    video.setAttribute("crossorigin","anonymous");
    if(loop){
      video.setAttribute("loop", "true");
    }

    video.src = videoUrl;

    document.querySelector("body").append(video);

    variables.videos[videoId].instance = video;
    variables.videos[videoId]._id = id;
    variables.videos[videoId].id = videoId;
    variables.videos[videoId].texturePtr = texturePtr;

    variables.eventHandles[videoId+"onLoadHandler"] =  function() {
      Module["VideoPlayerWEBGL"].onLoad(videoId, video.videoWidth, video.videoHeight);

      variables.videos[videoId].isReady=true;
      variables.videos[videoId].updateFrameIntervalId = setInterval(function() {
        textureUpdate(variables.videos[videoId].id, variables.videos[videoId].texturePtr)
      }, 1000 / 60);
      
      variables.videos[videoId].instance.removeEventListener("loadedmetadata", variables.eventHandles[videoId+"onLoadHandler"]);
    };

    variables.eventHandles[videoId+"onSeekedHandler"] =  function() {
      Module["VideoPlayerWEBGL"].onSeeked(variables.videos[videoId].id);
      
      variables.videos[videoId].instance.removeEventListener("seeked", variables.eventHandles[videoId+"onSeekedHandler"] );
    };

    variables.videos[videoId].instance.addEventListener('loadedmetadata', variables.eventHandles[videoId+"onLoadHandler"]);
    variables.videos[videoId].instance.addEventListener('seeked', variables.eventHandles[videoId+"onSeekedHandler"]);
  },
  isPlayable_VideoPlayerWEBGL: function(id){
    const videoId = UTF8ToString(id);
    if(variables.videos[videoId]){
      return variables.videos[videoId].isReady;
    }

    return false;
  },
  getWidth_VideoPlayerWEBGL: function(id){
    const videoId = UTF8ToString(id);
    if(variables.videos[videoId]){
      return variables.videos[videoId].instance.videoWidth;
    }

    return 0;
  },
  getHeight_VideoPlayerWEBGL: function(id){
    const videoId = UTF8ToString(id);
    if(variables.videos[videoId]){
      return variables.videos[videoId].instance.videoHeight;
    }

    return 0;
  },
  getCurrentTime_VideoPlayerWEBGL: function(id){
    const videoId = UTF8ToString(id);
    if(variables.videos[videoId]){
      return variables.videos[videoId].instance.currentTime;
    }

    return 0;
  },
  getDuration_VideoPlayerWEBGL: function(id){
    const videoId = UTF8ToString(id);
    if(variables.videos[videoId]){
      return variables.videos[videoId].instance.duration;
    }

    return 0;
  },
  play_VideoPlayerWEBGL: function(id){
    const videoId = UTF8ToString(id);
       console.log("play_VideoPlayerWEBGL")
    if(variables.videos[videoId]){
      variables.videos[videoId].instance.play();
    }
  },
  setTime_VideoPlayerWEBGL: function(id,time){
    const videoId = UTF8ToString(id);
    if(variables.videos[videoId]){
      variables.videos[videoId].instance.currentTime = time;
    }
  },
  pause_VideoPlayerWEBGL: function(id){
    const videoId = UTF8ToString(id);
     console.log("pause_VideoPlayerWEBGL")
    if(variables.videos[videoId]){
      variables.videos[videoId].instance.pause();
    }
  },
  stop_VideoPlayerWEBGL: function(id){
    const videoId = UTF8ToString(id);
         console.log("stop_VideoPlayerWEBGL")
    if(variables.videos[videoId]){
      variables.videos[videoId].instance.pause();
      variables.videos[videoId].instance.currentTime = 0;
    }
  },
  setPlaybackRate_VideoPlayerWEBGL: function(id,rate){
    const videoId = UTF8ToString(id);
    if(variables.videos[videoId]){
      variables.videos[videoId].instance.playbackRate = rate;
    }
  },
  setVolume_VideoPlayerWEBGL: function(id,volume){

    const videoId = UTF8ToString(id);
   
    if(variables.videos[videoId]){
      variables.videos[videoId].instance.volume = volume;
    }
  },
  setLoop_VideoPlayerWEBGL: function(id,value){
      const videoId = UTF8ToString(id);
      if(variables.videos[videoId]){
        if(value){
            variables.videos[videoId].instance.setAttribute("loop", "true");
        } else {
            variables.videos[videoId].instance.removeAttribute("loop");
        }
      }
  },
  $destroy: function(id){
    const videoId = UTF8ToString(id);

    if(variables.videos[videoId]){

      if(variables.videos[videoId].updateFrameIntervalId){
        clearInterval(variables.videos[videoId].updateFrameIntervalId)
      }

      variables.videos[videoId].instance.remove();
      variables.videos[videoId] = null;
    }
  },
  unSubscribeOnLoaded_VideoPlayerWEBGL: function () {
    Module["VideoPlayerWEBGL"].onLoadCallback = undefined;
  },
  subscribeOnLoaded_VideoPlayerWEBGL: function (callback) {
    Module["VideoPlayerWEBGL"].onLoadCallback = callback;
  },
  unSubscribeOnDestroy_VideoPlayerWEBGL: function () {
    Module["VideoPlayerWEBGL"].onDestroyCallback = undefined;
  },
  subscribeOnDestroy_VideoPlayerWEBGL: function (callback) {
    Module["VideoPlayerWEBGL"].onDestroyCallback = callback;
  },
  unSubscribeOnSeeked_VideoPlayerWEBGL: function () {
    Module["VideoPlayerWEBGL"].onSeekedCallback = undefined;
  },
  subscribeOnSeeked_VideoPlayerWEBGL: function (callback) {
    Module["VideoPlayerWEBGL"].onSeekedCallback = callback;
  },
};

autoAddDeps(VideoPlayerWEBGLPlugin, "$variables");
autoAddDeps(VideoPlayerWEBGLPlugin, "$textureUpdate");
autoAddDeps(VideoPlayerWEBGLPlugin, "$destroy");
mergeInto(LibraryManager.library, VideoPlayerWEBGLPlugin);