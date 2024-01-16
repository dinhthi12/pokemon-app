#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Calculate_lession1.cpp"
#include <sstream>

TEST_CASE("Test S(n) = 1 + 2 + 3 + … + n")
{
  SECTION("Test1")
  {
    REQUIRE(calculateLesson1(3) == 6);
  }
  SECTION("Test2")
  {
    REQUIRE(calculateLesson1(0) == 0);
  }
  SECTION("Test3")
  {
    REQUIRE(calculateLesson1(-3) == 0);
  }
}
