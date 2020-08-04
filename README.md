ofxProtobuf is a Google's [Protocol buffers](https://github.com/protocolbuffers/protobuf) addon for [openFrameworks](https://github.com/openframeworks/openframeworks)
==================================================
## CAUTION
this addon is working-in-progress. let me work a little bit more...

### About this addon
for now this is a simple addon supports an use of protocol buffer for openFrameworks projects.
it currently supports only OSX (10.13~), however, you can put other compiled library(ies) so that this addon can supports other platforms too!

Protobuf: 3.12.3
oF: 0.11.0 (osx)
Platform: MacOSX 10.13~10.15


### Difference from the original protobuf
- Edited file name of `<google/protobuf/stubs/time.h>` to `<google/protobuf/stubs/protobuf-time.h>` due to the conflict with `<ctime>`

## HOW TO USE
Create a project with `projectGenerator` and open `src` directory with a console pp (i.e. Terminal.app / iTerm in OSX).
Once you create a `.proto` file based on the [protobuf notation](https://developers.google.com/protocol-buffers/docs/proto) in the directory, you can compile the file to generate `.h` file and `.cpp` file by following command:
```
(OSX)
(path_to_OF_addons_directory)/ofxProtobuf/bin/osx/protoc your.proto --cpp_out=./
```
After that, you can load both of the header file and cpp file into the project so that you can use the protocol buffer in your OF project!

## Use Protobuf with networking
Easiest method will be encoding your protobuf class data into a string then send it over networking, such as OSC, UDP, TCP, ZeroMQ. (more examples will be coming soon!)

### TDL
- OF-style wrapper
- event driven
- example of usage with ZeroMQ to talk with other software (i.e. Max/MSP, Python script)

### LICENSE
MIT License? (need to checkout the license for original protobuf)
