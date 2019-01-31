//==================================================================================================
/**
  EVE - Expressive Vector Engine
  Copyright 2019 Joel FALCOU

  Licensed under the MIT License <http://opensource.org/licenses/MIT>.
  SPDX-License-Identifier: MIT
**/
//==================================================================================================
#ifndef EVE_CONSTANT_ONE_HPP_INCLUDED
#define EVE_CONSTANT_ONE_HPP_INCLUDED

#include <eve/detail/abi.hpp>
#include <eve/as.hpp>

namespace eve
{
  template<typename T>
  EVE_FORCEINLINE auto One(as_<T> const & = {})
  {
    return T(1);
  }
}

#endif
