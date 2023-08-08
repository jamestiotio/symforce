// This file was hand-written, modified from the Matrix43f type, with the hash
// generated by skymarshal.
#pragma once
#include <utility>

#include <Eigen/Dense>
#include <lcm/lcm_coretypes.h>

namespace eigen_lcm {

class Matrix43f : public Eigen::Matrix<float, 4, 3, Eigen::DontAlign> {
 public:
  // Default constructor. Unlike Eigen, eigen_lcm types initialize themselves to zero.
  // This is to prevent all sorts of uninitialized memory footguns.
  // Since the X sized variants are zero-sized by default, it is OK to default construct them.
  Matrix43f() : Eigen::Matrix<float, 4, 3, Eigen::DontAlign>() {
    *this = Matrix43f::Zero();
  }

  // Pass through constructor
  template <typename... Args>
  Matrix43f(Args&&... args) : Eigen::Matrix<float, 4, 3, Eigen::DontAlign>(args...) {}

  // This method allows you to assign Eigen expressions to eigen_lcm::Matrix43f
  template <typename OtherDerived>
  eigen_lcm::Matrix43f& operator=(const Eigen::MatrixBase<OtherDerived>& other) {
    Eigen::Matrix<float, 4, 3, Eigen::DontAlign>::operator=(other);
    return *this;
  }

  // Stream formatting operator
  friend std::ostream& operator<<(std::ostream& os, const eigen_lcm::Matrix43f& obj) {
    os << "Matrix43f(";
    for (size_t i = 0; i < obj.size(); ++i) {
      os << obj.data()[i];
      if (i + 1 != obj.size()) {
        os << ", ";
      }
    }
    os << ")";
    return os;
  }

 private:
  // Disable comma initialization magic for eigen_lcm types
  template <typename T>
  Eigen::Matrix<float, 4, 3, Eigen::DontAlign>& operator<<(T other);

 public:
  /**
   * Encode a message into binary form.
   *
   * @param buf The output buffer.
   * @param offset Encoding starts at thie byte offset into @p buf.
   * @param maxlen Maximum number of bytes to write.  This should generally be
   *  equal to getEncodedSize().
   * @return The number of bytes encoded, or <0 on error.
   */
  inline __lcm_buffer_size encode(void* buf, __lcm_buffer_size offset,
                                  __lcm_buffer_size maxlen) const;

  /**
   * Check how many bytes are required to encode this message.
   */
  inline __lcm_buffer_size getEncodedSize() const;

  /**
   * Decode a message from binary form into this instance.
   *
   * @param buf The buffer containing the encoded message.
   * @param offset The byte offset into @p buf where the encoded message starts.
   * @param maxlen The maximum number of bytes to read while decoding.
   * @return The number of bytes decoded, or <0 if an error occured.
   */
  inline __lcm_buffer_size decode(const void* buf, __lcm_buffer_size offset,
                                  __lcm_buffer_size maxlen);

  /**
   * Retrieve the 64-bit fingerprint identifying the structure of the message.
   * Note that the fingerprint is the same for all instances of the same
   * message type, and is a fingerprint on the message type definition, not on
   * the message contents.
   */
  constexpr static int64_t getHash();

  using type_name_array_t = const char[10];

  inline static constexpr type_name_array_t* getTypeNameArrayPtr();

  /**
   * Returns "Matrix43f"
   */
  inline static constexpr const char* getTypeName();

  /**
   * Returns "eigen_lcm"
   */
  inline static constexpr const char* getPackageName();

  // LCM support functions. Users should not call these
  inline __lcm_buffer_size _encodeNoHash(void* buf, __lcm_buffer_size offset,
                                         __lcm_buffer_size maxlen) const;
  inline __lcm_buffer_size _getEncodedSizeNoHash() const;
  inline __lcm_buffer_size _decodeNoHash(const void* buf, __lcm_buffer_size offset,
                                         __lcm_buffer_size maxlen);
  constexpr static uint64_t _computeHash(const __lcm_hash_ptr*) {
    uint64_t hash = 0x782a36eaf52557eaLL;
    return (hash << 1) + ((hash >> 63) & 1);
  }
};

__lcm_buffer_size Matrix43f::encode(void* buf, __lcm_buffer_size offset,
                                    __lcm_buffer_size maxlen) const {
  __lcm_buffer_size pos = 0, tlen;
  int64_t hash = (int64_t)getHash();

  tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
  if (tlen < 0)
    return tlen;
  else
    pos += tlen;

  tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
  if (tlen < 0)
    return tlen;
  else
    pos += tlen;

  return pos;
}

__lcm_buffer_size Matrix43f::decode(const void* buf, __lcm_buffer_size offset,
                                    __lcm_buffer_size maxlen) {
  __lcm_buffer_size pos = 0, thislen;

  int64_t msg_hash;
  thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &msg_hash, 1);
  if (thislen < 0)
    return thislen;
  else
    pos += thislen;
  if (msg_hash != getHash())
    return -1;

  thislen = this->_decodeNoHash(buf, offset + pos, maxlen - pos);
  if (thislen < 0)
    return thislen;
  else
    pos += thislen;

  return pos;
}

__lcm_buffer_size Matrix43f::getEncodedSize() const {
  return 8 + _getEncodedSizeNoHash();
}

constexpr int64_t Matrix43f::getHash() {
  return static_cast<int64_t>(_computeHash(NULL));
}

constexpr Matrix43f::type_name_array_t* Matrix43f::getTypeNameArrayPtr() {
  return &"Matrix43f";
}

constexpr const char* Matrix43f::getTypeName() {
  return *Matrix43f::getTypeNameArrayPtr();
}

constexpr const char* Matrix43f::getPackageName() {
  return "eigen_lcm";
}

__lcm_buffer_size Matrix43f::_encodeNoHash(void* buf, __lcm_buffer_size offset,
                                           __lcm_buffer_size maxlen) const {
  __lcm_buffer_size pos = 0, tlen;

  tlen = __float_encode_array(buf, offset + pos, maxlen - pos, this->data(), 12);
  if (tlen < 0)
    return tlen;
  else
    pos += tlen;

  return pos;
}

__lcm_buffer_size Matrix43f::_decodeNoHash(const void* buf, __lcm_buffer_size offset,
                                           __lcm_buffer_size maxlen) {
  __lcm_buffer_size pos = 0, tlen;

  tlen = __float_decode_array(buf, offset + pos, maxlen - pos, this->data(), 12);
  if (tlen < 0)
    return tlen;
  else
    pos += tlen;

  return pos;
}

__lcm_buffer_size Matrix43f::_getEncodedSizeNoHash() const {
  __lcm_buffer_size enc_size = 0;
  enc_size += __float_encoded_array_size(NULL, 12);
  return enc_size;
}

}  // namespace eigen_lcm
