#include "catch.hpp"
#include <boost/unordered_set.hpp>
#include <boost/functional/hash.hpp>

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

TEST_CASE("boost string hash")
{
    const auto hasher = boost::hash<std::string>();
    const size_t foo = hasher("this is a test string");
    REQUIRE( foo == 0x65291aa67439b95e );
}

TEST_CASE("boost size_t hash")
{
    size_t foo = 0x1234567890;
    for (size_t kk=0; kk<1024*1024; kk++)
        boost::hash_combine(foo, "vegetable for the win");
    REQUIRE( foo == 0xbfb7102a74d67890 );
}
