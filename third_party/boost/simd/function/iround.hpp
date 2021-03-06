//==================================================================================================
/*!
  @file

    @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_IROUND_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_IROUND_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{

  /*!

    @ingroup group-arithmetic
    This function object computes the integer conversion of the @ref round of its parameter.


    @par Header <boost/simd/function/iround.hpp>

    @par Note:
    This operation is properly saturated

    @see round, iround, iround, ifix, inearbyint

    @par Example:

      @snippet iround.cpp iround

    @par Possible output:

      @snippet iround.txt iround

  **/
  as_integer_t<Value> iround(Value const& x);
} }
#endif

#include <boost/simd/function/scalar/iround.hpp>
#include <boost/simd/function/simd/iround.hpp>

#endif
