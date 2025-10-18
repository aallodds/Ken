//=================================================================================================
// Copyright Grant Abernathy & Kendalynn Kohler. All rights reserved.
// Copyright Against All Odds. All rights reserved.
//=================================================================================================
#pragma once

namespace Ken
{

/*
* \brief Returns the minimum of two values.
* \tparam T The type of the values to compare.
* \param a The first value.
* \param b The second value.
* \return The minimum of the two values.
*/
template<typename T>
forceinline constexpr T Min(const T& a, const T& b) noexcept
{
    return (a < b) ? a : b;
}

/*
* \brief Returns the maximum of two values.
* \tparam T The type of the values to compare.
* \param a The first value.
* \param b The second value.
* \return The maximum of the two values.
*/
template<typename T>
forceinline constexpr T Max(const T& a, const T& b) noexcept
{
    return (a > b) ? a : b;
}

/*
* \brief Clamps a value between a minimum and maximum value.
* \tparam T The type of the value to clamp.
* \param value The value to clamp.
* \param min The minimum value.
* \param max The maximum value.
* \return The clamped value.
*/
template<typename T>
forceinline constexpr T Clamp(const T& value, const T& min, const T& max) noexcept
{
    return Min(Max(value, min), max);
}

}
