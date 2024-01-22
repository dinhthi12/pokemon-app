#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Calculate_lession5.cpp"
#include <sstream>

TEST_CASE("S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)")
{
  SECTION("Test1")
  {
    REQUIRE(calculateLesson5(3) == 176/105);
  }
  SECTION("Test2")
  {
    REQUIRE(calculateLesson5(0) == 1);
  }
  SECTION("Test3")
  {
    REQUIRE(calculateLesson5(-3) == 1);
  }
}
