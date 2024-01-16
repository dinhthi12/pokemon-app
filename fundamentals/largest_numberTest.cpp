#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "largest_number.cpp"
#include <sstream>

TEST_CASE("Find the largest in three arguments")
{
  SECTION("the first argument is the largest")
  {
    REQUIRE(theLargest(3.0f,2.0f,1.0f) == std::string("The largest: 3.000000"));
  }
  SECTION("the second argument is the largest")
  {
    REQUIRE(theLargest(3.0f,10.0f,-1.0f) == std::string("The largest: 10.000000"));
  }
  SECTION("the third argument is the largest")
  {
    REQUIRE(theLargest(-53.0f,-2.0f,20.0f) == std::string("The largest: 20.000000"));
  }
   SECTION("All numbers are equal")
  {
    REQUIRE(theLargest(-53.0f,-53.0f,-53.0f) == std::string("All numbers are equal"));
  }
}
