#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Calculate_lession2.cpp"
#include <sstream>

TEST_CASE("S(n) = 1^2 + 2^2 + … + n^2")
{
  SECTION("Test1")
  {
    REQUIRE(calculateLesson2(3) == 14);
  }
  SECTION("Test2")
  {
    REQUIRE(calculateLesson2(0) == 0);
  }
  SECTION("Test3")
  {
    REQUIRE(calculateLesson2(-3) == 0);
  }
}
