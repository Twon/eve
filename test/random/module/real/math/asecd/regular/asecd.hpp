//==================================================================================================
/*
  EVE - Expressive Vector Engine
  Copyright : EVE Contributors & Maintainers
  SPDX-License-Identifier: MIT
*/
//==================================================================================================
#include <eve/module/core/constant/valmax.hpp>
#include <eve/module/core/constant/valmin.hpp>
#include <eve/function/asecd.hpp>
#include <eve/function/radindeg.hpp>
#include <eve/function/rec.hpp>

#include "producers.hpp"
#include <cmath>

TTS_CASE_TPL("wide random check on asecd", EVE_TYPE)
<typename T>(::tts::type<T>)
{
  auto std_asecd = [](auto e) { return eve::radindeg(std::acos(eve::rec(e))); };

  eve::uniform_prng<EVE_VALUE> p1(eve::valmin(eve::as<EVE_VALUE>()), EVE_VALUE(-1));
  TTS_RANGE_CHECK(p1, std_asecd, eve::asecd);

  eve::uniform_prng<EVE_VALUE> p2(EVE_VALUE(1), eve::valmax(eve::as<EVE_VALUE>()));
  TTS_RANGE_CHECK(p2, std_asecd, eve::asecd);
};