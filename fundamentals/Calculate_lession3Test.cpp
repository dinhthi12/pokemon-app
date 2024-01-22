#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Calculate_lession3.cpp"
#include <sstream>

TEST_CASE("S(n) = 1 + 1/2 + 1/3 + … + 1/n")
{
  SECTION("Test1")
  {
    REQUIRE(calculateLesson3(3) == 11/6);
  }
  SECTION("Test2")
  {
    REQUIRE(calculateLesson3(0) == 0);
  }
  SECTION("Test3")
  {
    REQUIRE(calculateLesson3(-3) == 0);
  }
}
