//=================================================================================================
// Copyright Grant Abernathy & Kendalynn Kohler. All rights reserved.
// Copyright Against All Odds. All rights reserved.
//=================================================================================================
#pragma once

#include <cstdint>
#include <cstddef>

namespace Ken
{

// Unsigned 8-bit integer.
using u8 = std::uint8_t;
// Unsigned 16-bit integer.
using u16 = std::uint16_t;
// Unsigned 32-bit integer.
using u32 = std::uint32_t;
// Unsigned 64-bit integer.
using u64 = std::uint64_t;

// Signed 8-bit integer.
using s8 = std::int8_t;
// Signed 16-bit integer.
using s16 = std::int16_t;
// Signed 32-bit integer.
using s32 = std::int32_t;
// Signed 64-bit integer.
using s64 = std::int64_t;

// 32-bit floating point.
using f32 = float;
// 64-bit floating point.
using f64 = double;
// 128-bit floating point.
using f128 = long double;

// size. Use this for memory sizes and container sizes.
using size = std::size_t;
// ptrdiff. Use this for pointer arithmetic and array indexing.
using ptrdiff = std::ptrdiff_t;
// intptr. Use this for integer types that can hold pointer values.
using intptr = std::intptr_t;
// uintptr. Use this for unsigned integer types that can hold pointer values.
using uintptr = std::uintptr_t;
// wchar. Use this for wide characters.
using wchar = wchar_t;
// char8. Use this for UTF-8 characters.
using char8 = char8_t;
// char16. Use this for UTF-16 characters.
using char16 = char16_t;
// char32. Use this for UTF-32 characters.
using char32 = char32_t;

// byte. Use this for raw byte data.
using byte = u8;

} // namespace Ken
