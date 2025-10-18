//=================================================================================================
// Copyright Grant Abernathy & Kendalynn Kohler. All rights reserved.
// Copyright Against All Odds. All rights reserved.
//=================================================================================================
#pragma once

#if __MSVC
#define forceinline __forceinline
#define noinline __declspec(noinline)
#define alwaysinline __forceinline
#define thread_local __declspec(thread)
#elif __GCC || __CLANG
#define forceinline inline __attribute__((always_inline))
#define noinline __attribute__((noinline))
#define alwaysinline inline __attribute__((always_inline))
#define thread_local __thread
#else
#define forceinline inline
#define noinline
#define alwaysinline inline
#define thread_local thread_local
#endif

#if __MSVC
#define debugbreak() __debugbreak()
#elif __GCC || __CLANG
#if __X86_32
#define debugbreak() __asm__ __volatile__("int $0x03")
#endif
#if defined(__builtin_trap)
#define debugbreak() __builtin_trap()
#endif
#if !defined(debugbreak)
#include <csignal>
#if defined(SIGTRAP)
#define debugbreak() std::raise(SIGTRAP)
#else
#define debugbreak() std::raise(SIGABRT)
#endif
#endif
#else
#define debugbreak()
#endif
