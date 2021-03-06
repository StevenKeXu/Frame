// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: action.txt

#ifndef PROTOBUF_action_2etxt__INCLUDED
#define PROTOBUF_action_2etxt__INCLUDED

#ifdef _MSC_VER
#  pragma warning(push)
#  pragma warning(disable: 4127 4244 4267 4996)
#endif

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "scene.txt.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_action_2etxt();
void protobuf_AssignDesc_action_2etxt();
void protobuf_ShutdownFile_action_2etxt();

class GMAction_ReleaseSkill;
class GMAction_Move;
class GMAction_MoveToPoint;

enum GMActionType {
  MOVE = 1,
  RELEASE_SKILL = 2,
  MOVE_TO_POINT = 3
};
bool GMActionType_IsValid(int value);
const GMActionType GMActionType_MIN = MOVE;
const GMActionType GMActionType_MAX = MOVE_TO_POINT;
const int GMActionType_ARRAYSIZE = GMActionType_MAX + 1;

const ::google::protobuf::EnumDescriptor* GMActionType_descriptor();
inline const ::std::string& GMActionType_Name(GMActionType value) {
  return ::google::protobuf::internal::NameOfEnum(
    GMActionType_descriptor(), value);
}
inline bool GMActionType_Parse(
    const ::std::string& name, GMActionType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GMActionType>(
    GMActionType_descriptor(), name, value);
}
// ===================================================================

class GMAction_ReleaseSkill : public ::google::protobuf::Message {
 public:
  GMAction_ReleaseSkill();
  virtual ~GMAction_ReleaseSkill();

  GMAction_ReleaseSkill(const GMAction_ReleaseSkill& from);

  inline GMAction_ReleaseSkill& operator=(const GMAction_ReleaseSkill& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GMAction_ReleaseSkill& default_instance();

  void Swap(GMAction_ReleaseSkill* other);

  // implements Message ----------------------------------------------

  GMAction_ReleaseSkill* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GMAction_ReleaseSkill& from);
  void MergeFrom(const GMAction_ReleaseSkill& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 roleId = 1;
  inline bool has_roleid() const;
  inline void clear_roleid();
  static const int kRoleIdFieldNumber = 1;
  inline ::google::protobuf::int32 roleid() const;
  inline void set_roleid(::google::protobuf::int32 value);

  // required int32 skillId = 2;
  inline bool has_skillid() const;
  inline void clear_skillid();
  static const int kSkillIdFieldNumber = 2;
  inline ::google::protobuf::int32 skillid() const;
  inline void set_skillid(::google::protobuf::int32 value);

  // required .GMPoint3D mouseposition = 3;
  inline bool has_mouseposition() const;
  inline void clear_mouseposition();
  static const int kMousepositionFieldNumber = 3;
  inline const ::GMPoint3D& mouseposition() const;
  inline ::GMPoint3D* mutable_mouseposition();
  inline ::GMPoint3D* release_mouseposition();
  inline void set_allocated_mouseposition(::GMPoint3D* mouseposition);

  // @@protoc_insertion_point(class_scope:GMAction_ReleaseSkill)
 private:
  inline void set_has_roleid();
  inline void clear_has_roleid();
  inline void set_has_skillid();
  inline void clear_has_skillid();
  inline void set_has_mouseposition();
  inline void clear_has_mouseposition();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 roleid_;
  ::google::protobuf::int32 skillid_;
  ::GMPoint3D* mouseposition_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_action_2etxt();
  friend void protobuf_AssignDesc_action_2etxt();
  friend void protobuf_ShutdownFile_action_2etxt();

  void InitAsDefaultInstance();
  static GMAction_ReleaseSkill* default_instance_;
};
// -------------------------------------------------------------------

class GMAction_Move : public ::google::protobuf::Message {
 public:
  GMAction_Move();
  virtual ~GMAction_Move();

  GMAction_Move(const GMAction_Move& from);

  inline GMAction_Move& operator=(const GMAction_Move& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GMAction_Move& default_instance();

  void Swap(GMAction_Move* other);

  // implements Message ----------------------------------------------

  GMAction_Move* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GMAction_Move& from);
  void MergeFrom(const GMAction_Move& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 roleId = 1;
  inline bool has_roleid() const;
  inline void clear_roleid();
  static const int kRoleIdFieldNumber = 1;
  inline ::google::protobuf::int32 roleid() const;
  inline void set_roleid(::google::protobuf::int32 value);

  // required bool draging = 2;
  inline bool has_draging() const;
  inline void clear_draging();
  static const int kDragingFieldNumber = 2;
  inline bool draging() const;
  inline void set_draging(bool value);

  // required .GMPoint3D direction = 3;
  inline bool has_direction() const;
  inline void clear_direction();
  static const int kDirectionFieldNumber = 3;
  inline const ::GMPoint3D& direction() const;
  inline ::GMPoint3D* mutable_direction();
  inline ::GMPoint3D* release_direction();
  inline void set_allocated_direction(::GMPoint3D* direction);

  // @@protoc_insertion_point(class_scope:GMAction_Move)
 private:
  inline void set_has_roleid();
  inline void clear_has_roleid();
  inline void set_has_draging();
  inline void clear_has_draging();
  inline void set_has_direction();
  inline void clear_has_direction();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 roleid_;
  bool draging_;
  ::GMPoint3D* direction_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_action_2etxt();
  friend void protobuf_AssignDesc_action_2etxt();
  friend void protobuf_ShutdownFile_action_2etxt();

  void InitAsDefaultInstance();
  static GMAction_Move* default_instance_;
};
// -------------------------------------------------------------------

class GMAction_MoveToPoint : public ::google::protobuf::Message {
 public:
  GMAction_MoveToPoint();
  virtual ~GMAction_MoveToPoint();

  GMAction_MoveToPoint(const GMAction_MoveToPoint& from);

  inline GMAction_MoveToPoint& operator=(const GMAction_MoveToPoint& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GMAction_MoveToPoint& default_instance();

  void Swap(GMAction_MoveToPoint* other);

  // implements Message ----------------------------------------------

  GMAction_MoveToPoint* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GMAction_MoveToPoint& from);
  void MergeFrom(const GMAction_MoveToPoint& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 roleId = 1;
  inline bool has_roleid() const;
  inline void clear_roleid();
  static const int kRoleIdFieldNumber = 1;
  inline ::google::protobuf::int32 roleid() const;
  inline void set_roleid(::google::protobuf::int32 value);

  // required .GMPoint3D position = 2;
  inline bool has_position() const;
  inline void clear_position();
  static const int kPositionFieldNumber = 2;
  inline const ::GMPoint3D& position() const;
  inline ::GMPoint3D* mutable_position();
  inline ::GMPoint3D* release_position();
  inline void set_allocated_position(::GMPoint3D* position);

  // @@protoc_insertion_point(class_scope:GMAction_MoveToPoint)
 private:
  inline void set_has_roleid();
  inline void clear_has_roleid();
  inline void set_has_position();
  inline void clear_has_position();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::GMPoint3D* position_;
  ::google::protobuf::int32 roleid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_action_2etxt();
  friend void protobuf_AssignDesc_action_2etxt();
  friend void protobuf_ShutdownFile_action_2etxt();

  void InitAsDefaultInstance();
  static GMAction_MoveToPoint* default_instance_;
};
// ===================================================================


// ===================================================================

// GMAction_ReleaseSkill

// required int32 roleId = 1;
inline bool GMAction_ReleaseSkill::has_roleid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GMAction_ReleaseSkill::set_has_roleid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GMAction_ReleaseSkill::clear_has_roleid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GMAction_ReleaseSkill::clear_roleid() {
  roleid_ = 0;
  clear_has_roleid();
}
inline ::google::protobuf::int32 GMAction_ReleaseSkill::roleid() const {
  return roleid_;
}
inline void GMAction_ReleaseSkill::set_roleid(::google::protobuf::int32 value) {
  set_has_roleid();
  roleid_ = value;
}

// required int32 skillId = 2;
inline bool GMAction_ReleaseSkill::has_skillid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GMAction_ReleaseSkill::set_has_skillid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GMAction_ReleaseSkill::clear_has_skillid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GMAction_ReleaseSkill::clear_skillid() {
  skillid_ = 0;
  clear_has_skillid();
}
inline ::google::protobuf::int32 GMAction_ReleaseSkill::skillid() const {
  return skillid_;
}
inline void GMAction_ReleaseSkill::set_skillid(::google::protobuf::int32 value) {
  set_has_skillid();
  skillid_ = value;
}

// required .GMPoint3D mouseposition = 3;
inline bool GMAction_ReleaseSkill::has_mouseposition() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GMAction_ReleaseSkill::set_has_mouseposition() {
  _has_bits_[0] |= 0x00000004u;
}
inline void GMAction_ReleaseSkill::clear_has_mouseposition() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void GMAction_ReleaseSkill::clear_mouseposition() {
  if (mouseposition_ != NULL) mouseposition_->::GMPoint3D::Clear();
  clear_has_mouseposition();
}
inline const ::GMPoint3D& GMAction_ReleaseSkill::mouseposition() const {
  return mouseposition_ != NULL ? *mouseposition_ : *default_instance_->mouseposition_;
}
inline ::GMPoint3D* GMAction_ReleaseSkill::mutable_mouseposition() {
  set_has_mouseposition();
  if (mouseposition_ == NULL) mouseposition_ = new ::GMPoint3D;
  return mouseposition_;
}
inline ::GMPoint3D* GMAction_ReleaseSkill::release_mouseposition() {
  clear_has_mouseposition();
  ::GMPoint3D* temp = mouseposition_;
  mouseposition_ = NULL;
  return temp;
}
inline void GMAction_ReleaseSkill::set_allocated_mouseposition(::GMPoint3D* mouseposition) {
  delete mouseposition_;
  mouseposition_ = mouseposition;
  if (mouseposition) {
    set_has_mouseposition();
  } else {
    clear_has_mouseposition();
  }
}

// -------------------------------------------------------------------

// GMAction_Move

// required int32 roleId = 1;
inline bool GMAction_Move::has_roleid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GMAction_Move::set_has_roleid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GMAction_Move::clear_has_roleid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GMAction_Move::clear_roleid() {
  roleid_ = 0;
  clear_has_roleid();
}
inline ::google::protobuf::int32 GMAction_Move::roleid() const {
  return roleid_;
}
inline void GMAction_Move::set_roleid(::google::protobuf::int32 value) {
  set_has_roleid();
  roleid_ = value;
}

// required bool draging = 2;
inline bool GMAction_Move::has_draging() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GMAction_Move::set_has_draging() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GMAction_Move::clear_has_draging() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GMAction_Move::clear_draging() {
  draging_ = false;
  clear_has_draging();
}
inline bool GMAction_Move::draging() const {
  return draging_;
}
inline void GMAction_Move::set_draging(bool value) {
  set_has_draging();
  draging_ = value;
}

// required .GMPoint3D direction = 3;
inline bool GMAction_Move::has_direction() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GMAction_Move::set_has_direction() {
  _has_bits_[0] |= 0x00000004u;
}
inline void GMAction_Move::clear_has_direction() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void GMAction_Move::clear_direction() {
  if (direction_ != NULL) direction_->::GMPoint3D::Clear();
  clear_has_direction();
}
inline const ::GMPoint3D& GMAction_Move::direction() const {
  return direction_ != NULL ? *direction_ : *default_instance_->direction_;
}
inline ::GMPoint3D* GMAction_Move::mutable_direction() {
  set_has_direction();
  if (direction_ == NULL) direction_ = new ::GMPoint3D;
  return direction_;
}
inline ::GMPoint3D* GMAction_Move::release_direction() {
  clear_has_direction();
  ::GMPoint3D* temp = direction_;
  direction_ = NULL;
  return temp;
}
inline void GMAction_Move::set_allocated_direction(::GMPoint3D* direction) {
  delete direction_;
  direction_ = direction;
  if (direction) {
    set_has_direction();
  } else {
    clear_has_direction();
  }
}

// -------------------------------------------------------------------

// GMAction_MoveToPoint

// required int32 roleId = 1;
inline bool GMAction_MoveToPoint::has_roleid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GMAction_MoveToPoint::set_has_roleid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GMAction_MoveToPoint::clear_has_roleid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GMAction_MoveToPoint::clear_roleid() {
  roleid_ = 0;
  clear_has_roleid();
}
inline ::google::protobuf::int32 GMAction_MoveToPoint::roleid() const {
  return roleid_;
}
inline void GMAction_MoveToPoint::set_roleid(::google::protobuf::int32 value) {
  set_has_roleid();
  roleid_ = value;
}

// required .GMPoint3D position = 2;
inline bool GMAction_MoveToPoint::has_position() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GMAction_MoveToPoint::set_has_position() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GMAction_MoveToPoint::clear_has_position() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GMAction_MoveToPoint::clear_position() {
  if (position_ != NULL) position_->::GMPoint3D::Clear();
  clear_has_position();
}
inline const ::GMPoint3D& GMAction_MoveToPoint::position() const {
  return position_ != NULL ? *position_ : *default_instance_->position_;
}
inline ::GMPoint3D* GMAction_MoveToPoint::mutable_position() {
  set_has_position();
  if (position_ == NULL) position_ = new ::GMPoint3D;
  return position_;
}
inline ::GMPoint3D* GMAction_MoveToPoint::release_position() {
  clear_has_position();
  ::GMPoint3D* temp = position_;
  position_ = NULL;
  return temp;
}
inline void GMAction_MoveToPoint::set_allocated_position(::GMPoint3D* position) {
  delete position_;
  position_ = position;
  if (position) {
    set_has_position();
  } else {
    clear_has_position();
  }
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::GMActionType>() {
  return ::GMActionType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#ifdef _MSC_VER
#  pragma warning(pop)
#endif

#endif  // PROTOBUF_action_2etxt__INCLUDED
