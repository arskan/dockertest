#include "catch.hpp"

TEST_CASE("one should not be false")
{
		REQUIRE( 1 != false );
}

