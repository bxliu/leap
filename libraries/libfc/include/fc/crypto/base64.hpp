#pragma once
#include <string>
#include <string_view>

namespace fc {
std::string base64_encode(unsigned char const* bytes_to_encode, unsigned int in_len);
inline std::string base64_encode(char const* bytes_to_encode, unsigned int in_len) { return base64_encode( (unsigned char const*)bytes_to_encode, in_len); }
std::string base64_encode( const std::string_view& enc );
std::string base64_decode( const std::string_view& encoded_string);

std::string base64url_encode(unsigned char const* bytes_to_encode, unsigned int in_len);
inline std::string base64url_encode(char const* bytes_to_encode, unsigned int in_len) { return base64url_encode( (unsigned char const*)bytes_to_encode, in_len); }
std::string base64url_encode( const std::string_view& enc );
std::string base64url_decode( const std::string_view& encoded_string);
}  // namespace fc
