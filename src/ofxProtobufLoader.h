//
//  ofxProtobufLoader.h
//  example-simple
//
//  Created by Ryo Hajika on 2020/07/03.
//

#pragma once

// PROTOBUF
#include <google/protobuf/arena.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/descriptor_database.h>
#include <google/protobuf/dynamic_message.h>
#include <google/protobuf/map.h>
#include <google/protobuf/message.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/service.h>
#include <google/protobuf/text_format.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/common.h>
// PROTOBUF::IO
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/tokenizer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/zero_copy_stream_impl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// PROTOBUF::UTIL
#include <google/protobuf/util/field_comparator.h>
#include <google/protobuf/util/field_mask_util.h>
#include <google/protobuf/util/json_util.h>
#include <google/protobuf/util/message_differencer.h>
#include <google/protobuf/util/time_util.h>
#include <google/protobuf/util/type_resolver.h>
#include <google/protobuf/util/type_resolver_util.h>
// PROTOBUF::COMPILER
#include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/importer.h>
#include <google/protobuf/compiler/parser.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/compiler/plugin.pb.h>
#include <google/protobuf/compiler/cpp/cpp_generator.h>
#include <google/protobuf/compiler/csharp/csharp_generator.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/compiler/java/java_generator.h>
#include <google/protobuf/compiler/java/java_names.h>
#include <google/protobuf/compiler/js/js_generator.h>
#include <google/protobuf/compiler/objectivec/objectivec_generator.h>
#include <google/protobuf/compiler/objectivec/objectivec_helpers.h>
#include <google/protobuf/compiler/python/python_generator.h>
#include <google/protobuf/compiler/ruby/ruby_generator.h>
