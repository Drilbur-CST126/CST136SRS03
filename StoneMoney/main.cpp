#include "stdafx.h"
#include "currency.h"
#include "countries.h"

int main()
{
	constexpr Currency<Country::US, Currency<Country::NZ, 1'23, Convert::kFrom>::value_, Convert::kTo> c1; // $1.23 NZ == ~$0.87 US
	constexpr Currency<Country::AU, Currency<Country::NZ, 1'23, Convert::kFrom>::value_, Convert::kTo> c2; // $1.23 NZ == ~$1.14 AU
	constexpr Currency<Country::NZ, Currency<Country::NZ, 1'23, Convert::kFrom>::value_, Convert::kTo> c3; // $1.23 NZ == ~$1.23 NZ
	constexpr Currency<Country::FJ, Currency<Country::NZ, 1'23, Convert::kFrom>::value_, Convert::kTo> c4; // $1.23 NZ == ~$1.77 FJ
	constexpr Currency<Country::TO, Currency<Country::NZ, 1'23, Convert::kFrom>::value_, Convert::kTo> c5; // $1.23 NZ == ~$1.93 TO
	constexpr Currency<Country::PG, Currency<Country::NZ, 1'23, Convert::kFrom>::value_, Convert::kTo> c6; // $1.23 NZ == ~$2.80 PG
	constexpr Currency<Country::SB, Currency<Country::NZ, 1'23, Convert::kFrom>::value_, Convert::kTo> c7; // $1.23 NZ == ~$6.69 SB
	// constexpr Currency<Country::MARS, Currency<Country::NZ, 1'23, Convert::kFrom>::value_, Convert::kTo> c8; // Doesn't work, Mars has no currency
	constexpr int i1 = c1;
	constexpr int i2 = c2;
	constexpr int i3 = c3;
	constexpr int i4 = c4;
	constexpr int i5 = c5;
	constexpr int i6 = c6;
	constexpr int i7 = c7;
	
	return 0;
}