//=================================================================================================
// Copyright Grant Abernathy & Kendalynn Kohler. All rights reserved.
// Copyright Against All Odds. All rights reserved.
//=================================================================================================
#pragma once

#if defined(__BUILD_DEBUG)
#undef __DEBUG
#define __DEBUG      1
#undef __DEV
#define __DEV        1
#undef __KASSERT
#define __KASSERT    1
#undef __KEXCEPT
#define __KEXCEPT    1
#endif

#if defined(__BUILD_RELEASE)
#undef __RELEASE
#define __RELEASE    1
#undef __KASSERT
#define __KASSERT    1
#undef __RETAIL
#define __RETAIL     1
#endif

#if defined(__KEN_TARGET_WINDOWS_64BIT_MSVC)
#undef __X86_64
#define __X86_64    1
#undef __DESKTOP
#define __DESKTOP   1
#undef __WINDOWS
#define __WINDOWS   1
#undef __WIN64
#define __WIN64     1
#undef __MSVC
#define __MSVC      1
#endif

#if defined(__KEN_TARGET_WINDOWS_64BIT_CLANG)
#undef __X86_64
#define __X86_64    1
#undef __DESKTOP
#define __DESKTOP   1
#undef __WINDOWS
#define __WINDOWS   1
#undef __WIN64
#define __WIN64     1
#undef __CLANG
#define __CLANG     1
#endif

#if defined(__KEN_TARGET_LINUX_64BIT_GCC)
#undef __X86_64
#define __X86_64    1
#undef __DESKTOP
#define __DESKTOP   1
#undef __LINUX
#define __LINUX     1
#undef __LINUX64
#define __LINUX64   1
#undef __GCC
#define __GCC       1
#endif

#if defined(__KEN_TARGET_LINUX_64BIT_CLANG)
#undef __X86_64
#define __X86_64    1
#undef __DESKTOP
#define __DESKTOP   1
#undef __LINUX
#define __LINUX     1
#undef __LINUX64
#define __LINUX64   1
#undef __CLANG
#define __CLANG     1
#endif

#if defined(__KEN_TARGET_MACOS_ARM64_CLANG)
#undef __ARM64
#define __ARM64     1
#undef __DESKTOP
#define __DESKTOP   1
#undef __MACOS
#define __MACOS     1
#undef __MACOS_ARM
#define __MACOS_ARM 1
#undef __CLANG
#define __CLANG     1
#endif

#if defined(__KEN_TARGET_MACOS_X86_64_CLANG)
#undef __X86_64
#define __X86_64    1
#undef __DESKTOP
#define __DESKTOP   1
#undef __MACOS
#define __MACOS     1
#undef __MACOS_X86
#define __MACOS_X86 1
#undef __CLANG
#define __CLANG     1
#endif

#if defined(__KEN_TARGET_PS3)
#undef __PPC64
#define __PPC64     1
#undef __CELL
#define __CELL      1
#undef __CONSOLE
#define __CONSOLE   1
#undef __SONY_PLATFORM
#define __SONY_PLATFORM 1
#undef __PS3
#define __PS3       1
#undef __GCC
#define __GCC       1
#endif

#if defined(__KEN_TARGET_ORBIS)
#undef __X86_64
#define __X86_64    1
#undef __CONSOLE
#define __CONSOLE   1
#undef __SONY_PLATFORM
#define __SONY_PLATFORM 1
#undef __ORBIS
#define __ORBIS     1
#undef __CLANG
#define __CLANG     1
#endif

#if defined(__KEN_TARGET_PROSPERO)
#undef __X86_64
#define __X86_64    1
#undef __CONSOLE
#define __CONSOLE   1
#undef __SONY_PLATFORM
#define __SONY_PLATFORM 1
#undef __PROSPERO
#define __PROSPERO  1
#undef __CLANG
#define __CLANG     1
#endif

#if defined(__KEN_TARGET_XBOX)
#undef __X86_32
#define __X86_32    1
#undef __CONSOLE
#define __CONSOLE   1
#undef __XBOX_PLATFORM
#define __XBOX_PLATFORM 1
#undef __XBOX
#define __XBOX      1
#undef __MSVC
#define __MSVC      1
#endif

#if defined(__KEN_TARGET_XENON)
#undef __PPC64
#define __PPC64     1
#undef __CONSOLE
#define __CONSOLE   1
#undef __XBOX_PLATFORM
#define __XBOX_PLATFORM 1
#undef __XENON
#define __XENON     1
#undef __MSVC
#define __MSVC      1
#endif

#if defined(__KEN_TARGET_DURANGO)
#undef __X86_64
#define __X86_64    1
#undef __CONSOLE
#define __CONSOLE   1
#undef __XBOX_PLATFORM
#define __XBOX_PLATFORM 1
#undef __DURANGO
#define __DURANGO   1
#undef __MSVC
#define __MSVC      1
#endif

#if defined(__KEN_TARGET_SCARLETT)
#undef __X86_64
#define __X86_64    1
#undef __CONSOLE
#define __CONSOLE   1
#undef __XBOX_PLATFORM
#define __XBOX_PLATFORM 1
#undef __SCARLETT
#define __SCARLETT  1
#undef __MSVC
#define __MSVC      1
#endif
