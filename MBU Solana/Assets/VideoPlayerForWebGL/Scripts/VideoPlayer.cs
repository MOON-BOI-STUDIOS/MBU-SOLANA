using System;
using System.Runtime.InteropServices;
using AOT;

namespace MagicWebSolutions
{
    public class VideoPlayer
    {
        #region Video Player Methods

        [DllImport("__Internal", EntryPoint = "createVideoFromSources_VideoPlayerWEBGL")]
        public static extern void createVideoFromSource(string id, string url, IntPtr texturePtr, bool loop);

        [DllImport("__Internal", EntryPoint = "isPlayable_VideoPlayerWEBGL")]
        public static extern bool isReady(string id);

        [DllImport("__Internal", EntryPoint = "getWidth_VideoPlayerWEBGL")]
        public static extern int getWidth(string id);

        [DllImport("__Internal", EntryPoint = "getHeight_VideoPlayerWEBGL")]
        public static extern int getHeight(string id);

        [DllImport("__Internal", EntryPoint = "getCurrentTime_VideoPlayerWEBGL")]
        public static extern int getCurrentTime(string id);

        [DllImport("__Internal", EntryPoint = "getDuration_VideoPlayerWEBGL")]
        public static extern int getDuration(string id);

        [DllImport("__Internal", EntryPoint = "play_VideoPlayerWEBGL")]
        public static extern void play(string id);

        [DllImport("__Internal", EntryPoint = "setTime_VideoPlayerWEBGL")]
        public static extern void setTime(string id, int timeInSeconds);

        [DllImport("__Internal", EntryPoint = "pause_VideoPlayerWEBGL")]
        public static extern void pause(string id);

        [DllImport("__Internal", EntryPoint = "stop_VideoPlayerWEBGL")]
        public static extern void stop(string id);

        [DllImport("__Internal", EntryPoint = "setPlaybackRate_VideoPlayerWEBGL")]
        public static extern void setPlaybackRate(string id, double rate);

        [DllImport("__Internal", EntryPoint = "setLoop_VideoPlayerWEBGL")]
        public static extern void setLoop(string id, bool loop);

        // volume: Between 0-1
        [DllImport("__Internal", EntryPoint = "setVolume_VideoPlayerWEBGL")]
        public static extern void setVolume(string id, double volume);

        [DllImport("__Internal", EntryPoint = "destroy_VideoPlayerWEBGL")]
        public static extern void destroy(string id);

        [DllImport("__Internal", EntryPoint = "subscribeOnLoaded_VideoPlayerWEBGL")]
        public static extern void subscribeOnLoaded(Action<IntPtr, int, int> callback);

        [DllImport("__Internal", EntryPoint = "unSubscribeOnLoaded_VideoPlayerWEBGL")]
        public static extern void unSubscribeOnLoaded();

        [DllImport("__Internal", EntryPoint = "subscribeOnDestroy_VideoPlayerWEBGL")]
        public static extern void subscribeOnDestroy(Action<IntPtr> callback);

        [DllImport("__Internal", EntryPoint = "unSubscribeOnDestroy_VideoPlayerWEBGL")]
        public static extern void unSubscribeOnDestroy();

        [DllImport("__Internal", EntryPoint = "subscribeOnSeeked_VideoPlayerWEBGL")]
        public static extern void subscribeOnSeeked(Action<IntPtr> callback);

        [DllImport("__Internal", EntryPoint = "unSubscribeOnSeeked_VideoPlayerWEBGL")]
        public static extern void unSubscribeOnDSeeked();

        public static event Action<string, int, int> onLoaded;
        public static event Action<string> onDestroy;
        public static event Action<string> onSeeked;

        [MonoPInvokeCallback(typeof(Action<IntPtr, int, int>))]
        public static void onLoadedCallback(IntPtr id, int width, int height)
        {
            string videoId = Marshal.PtrToStringAuto(id);
            onLoaded?.Invoke(videoId, width, height);
        }

        [MonoPInvokeCallback(typeof(Action<IntPtr>))]
        public static void onDestoryCallback(IntPtr id)
        {
            string videoId = Marshal.PtrToStringAuto(id);
            onDestroy?.Invoke(videoId);
        }

        [MonoPInvokeCallback(typeof(Action<IntPtr>))]
        public static void onSeekedCallback(IntPtr id)
        {
            string videoId = Marshal.PtrToStringAuto(id);
            onSeeked?.Invoke(videoId);
        }

        #endregion
    }
}