// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: example-simple.proto

#include "example-simple.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace ofxProtobuf {
class ProtoDataDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ProtoData> _instance;
} _ProtoData_default_instance_;
}  // namespace ofxProtobuf
static void InitDefaultsscc_info_ProtoData_example_2dsimple_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ofxProtobuf::_ProtoData_default_instance_;
    new (ptr) ::ofxProtobuf::ProtoData();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ofxProtobuf::ProtoData::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ProtoData_example_2dsimple_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ProtoData_example_2dsimple_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_example_2dsimple_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_example_2dsimple_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_example_2dsimple_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_example_2dsimple_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ofxProtobuf::ProtoData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ofxProtobuf::ProtoData, color_r_),
  PROTOBUF_FIELD_OFFSET(::ofxProtobuf::ProtoData, color_g_),
  PROTOBUF_FIELD_OFFSET(::ofxProtobuf::ProtoData, color_b_),
  PROTOBUF_FIELD_OFFSET(::ofxProtobuf::ProtoData, color_a_),
  PROTOBUF_FIELD_OFFSET(::ofxProtobuf::ProtoData, vertex_x_),
  PROTOBUF_FIELD_OFFSET(::ofxProtobuf::ProtoData, vertex_y_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ofxProtobuf::ProtoData)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::ofxProtobuf::_ProtoData_default_instance_),
};

const char descriptor_table_protodef_example_2dsimple_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024example-simple.proto\022\013ofxProtobuf\"s\n\tP"
  "rotoData\022\017\n\007color_r\030\001 \001(\r\022\017\n\007color_g\030\002 \001"
  "(\r\022\017\n\007color_b\030\003 \001(\r\022\017\n\007color_a\030\004 \001(\r\022\020\n\010"
  "vertex_x\030\005 \003(\002\022\020\n\010vertex_y\030\006 \003(\002b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_example_2dsimple_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_example_2dsimple_2eproto_sccs[1] = {
  &scc_info_ProtoData_example_2dsimple_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_example_2dsimple_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_example_2dsimple_2eproto = {
  false, false, descriptor_table_protodef_example_2dsimple_2eproto, "example-simple.proto", 160,
  &descriptor_table_example_2dsimple_2eproto_once, descriptor_table_example_2dsimple_2eproto_sccs, descriptor_table_example_2dsimple_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_example_2dsimple_2eproto::offsets,
  file_level_metadata_example_2dsimple_2eproto, 1, file_level_enum_descriptors_example_2dsimple_2eproto, file_level_service_descriptors_example_2dsimple_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_example_2dsimple_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_example_2dsimple_2eproto)), true);
namespace ofxProtobuf {

// ===================================================================

void ProtoData::InitAsDefaultInstance() {
}
class ProtoData::_Internal {
 public:
};

ProtoData::ProtoData(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  vertex_x_(arena),
  vertex_y_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:ofxProtobuf.ProtoData)
}
ProtoData::ProtoData(const ProtoData& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      vertex_x_(from.vertex_x_),
      vertex_y_(from.vertex_y_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&color_r_, &from.color_r_,
    static_cast<size_t>(reinterpret_cast<char*>(&color_a_) -
    reinterpret_cast<char*>(&color_r_)) + sizeof(color_a_));
  // @@protoc_insertion_point(copy_constructor:ofxProtobuf.ProtoData)
}

void ProtoData::SharedCtor() {
  ::memset(&color_r_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&color_a_) -
      reinterpret_cast<char*>(&color_r_)) + sizeof(color_a_));
}

ProtoData::~ProtoData() {
  // @@protoc_insertion_point(destructor:ofxProtobuf.ProtoData)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ProtoData::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void ProtoData::ArenaDtor(void* object) {
  ProtoData* _this = reinterpret_cast< ProtoData* >(object);
  (void)_this;
}
void ProtoData::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ProtoData::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ProtoData& ProtoData::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ProtoData_example_2dsimple_2eproto.base);
  return *internal_default_instance();
}


void ProtoData::Clear() {
// @@protoc_insertion_point(message_clear_start:ofxProtobuf.ProtoData)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  vertex_x_.Clear();
  vertex_y_.Clear();
  ::memset(&color_r_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&color_a_) -
      reinterpret_cast<char*>(&color_r_)) + sizeof(color_a_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ProtoData::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint32 color_r = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          color_r_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 color_g = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          color_g_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 color_b = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          color_b_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 color_a = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          color_a_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated float vertex_x = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_vertex_x(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 45) {
          _internal_add_vertex_x(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // repeated float vertex_y = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_vertex_y(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 53) {
          _internal_add_vertex_y(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ProtoData::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ofxProtobuf.ProtoData)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 color_r = 1;
  if (this->color_r() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_color_r(), target);
  }

  // uint32 color_g = 2;
  if (this->color_g() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_color_g(), target);
  }

  // uint32 color_b = 3;
  if (this->color_b() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_color_b(), target);
  }

  // uint32 color_a = 4;
  if (this->color_a() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(4, this->_internal_color_a(), target);
  }

  // repeated float vertex_x = 5;
  if (this->_internal_vertex_x_size() > 0) {
    target = stream->WriteFixedPacked(5, _internal_vertex_x(), target);
  }

  // repeated float vertex_y = 6;
  if (this->_internal_vertex_y_size() > 0) {
    target = stream->WriteFixedPacked(6, _internal_vertex_y(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ofxProtobuf.ProtoData)
  return target;
}

size_t ProtoData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ofxProtobuf.ProtoData)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated float vertex_x = 5;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_vertex_x_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _vertex_x_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated float vertex_y = 6;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_vertex_y_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _vertex_y_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // uint32 color_r = 1;
  if (this->color_r() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_color_r());
  }

  // uint32 color_g = 2;
  if (this->color_g() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_color_g());
  }

  // uint32 color_b = 3;
  if (this->color_b() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_color_b());
  }

  // uint32 color_a = 4;
  if (this->color_a() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_color_a());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ProtoData::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ofxProtobuf.ProtoData)
  GOOGLE_DCHECK_NE(&from, this);
  const ProtoData* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ProtoData>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ofxProtobuf.ProtoData)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ofxProtobuf.ProtoData)
    MergeFrom(*source);
  }
}

void ProtoData::MergeFrom(const ProtoData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ofxProtobuf.ProtoData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  vertex_x_.MergeFrom(from.vertex_x_);
  vertex_y_.MergeFrom(from.vertex_y_);
  if (from.color_r() != 0) {
    _internal_set_color_r(from._internal_color_r());
  }
  if (from.color_g() != 0) {
    _internal_set_color_g(from._internal_color_g());
  }
  if (from.color_b() != 0) {
    _internal_set_color_b(from._internal_color_b());
  }
  if (from.color_a() != 0) {
    _internal_set_color_a(from._internal_color_a());
  }
}

void ProtoData::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ofxProtobuf.ProtoData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProtoData::CopyFrom(const ProtoData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ofxProtobuf.ProtoData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProtoData::IsInitialized() const {
  return true;
}

void ProtoData::InternalSwap(ProtoData* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  vertex_x_.InternalSwap(&other->vertex_x_);
  vertex_y_.InternalSwap(&other->vertex_y_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ProtoData, color_a_)
      + sizeof(ProtoData::color_a_)
      - PROTOBUF_FIELD_OFFSET(ProtoData, color_r_)>(
          reinterpret_cast<char*>(&color_r_),
          reinterpret_cast<char*>(&other->color_r_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ProtoData::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace ofxProtobuf
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::ofxProtobuf::ProtoData* Arena::CreateMaybeMessage< ::ofxProtobuf::ProtoData >(Arena* arena) {
  return Arena::CreateMessageInternal< ::ofxProtobuf::ProtoData >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
