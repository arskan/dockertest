#include "catch.hpp"
#include <boost/unordered_set.hpp>
#include <iostream>

TEST_CASE("test boost unordered set")
{
		typedef boost::unordered_set<size_t> IntSet;

		IntSet set;
		size_t last = 1;
		size_t current = 1;
		for (size_t kk=0; kk<1024*1024; kk++)
		{
				set.insert(current);
				size_t foo = current;
				current += last;
				last = foo;
		}

		REQUIRE( set.size() == 1024*1024 );
}

