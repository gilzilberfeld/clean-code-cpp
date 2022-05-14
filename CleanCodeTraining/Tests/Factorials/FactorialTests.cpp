#include "catch2/catch.hpp"
#include "..\..\Code\Factorials\Factorials.h"

TEST_CASE("Factorial Tests", "calculation")
{
	Factorials factorial;
	REQUIRE( factorial.Calculate(1) == 1);
	REQUIRE( factorial.Calculate(2) == 2);
	REQUIRE( factorial.Calculate(3) == 6);
	REQUIRE( factorial.Calculate(10) == 3628800);

}


