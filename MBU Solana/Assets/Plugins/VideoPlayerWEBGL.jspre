Module["VideoPlayerWEBGL"] = Module["VideoPlayerWEBGL"] || {};
// Available callbacks
// Module["VideoPlayerWEBGL"].onLoadCallback
// Module["VideoPlayerWEBGL"].onDestroyCallback
// Module["VideoPlayerWEBGL"].onSeekedCallback

Module["VideoPlayerWEBGL"].onLoad = function (id, width, height) {
  if (Module["VideoPlayerWEBGL"].onLoadCallback) {
    const length = lengthBytesUTF8(id) + 1;
    const buffer = _malloc(length);
    stringToUTF8(id, buffer, length);

    Module.dynCall_viii(
      Module["VideoPlayerWEBGL"].onLoadCallback,
      buffer,
      width,
      height
    );
  }
};
Module["VideoPlayerWEBGL"].onDestroy = function (id) {
  if (Module["VideoPlayerWEBGL"].onDestroyCallback) {
    const length = lengthBytesUTF8(id) + 1;
    const buffer = _malloc(length);
    stringToUTF8(id, buffer, length);

    Module.dynCall_vi(Module["VideoPlayerWEBGL"].onDestroyCallback, buffer);
  }
};
Module["VideoPlayerWEBGL"].onSeeked = function (id) {
  if (Module["VideoPlayerWEBGL"].onSeekedCallback) {
    const length = lengthBytesUTF8(id) + 1;
    const buffer = _malloc(length);
    stringToUTF8(id, buffer, length);

    Module.dynCall_vi(Module["VideoPlayerWEBGL"].onSeekedCallback, buffer);
  }
};