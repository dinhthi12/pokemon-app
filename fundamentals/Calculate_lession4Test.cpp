#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Calculate_lession4.cpp"
#include <sstream>

TEST_CASE("S(n) =1/2 + 1/4 + … + 1/2n")
{
  SECTION("Test1")
  {
    REQUIRE(calculateLesson4(3) == 11/12);
  }
  SECTION("Test2")
  {
    REQUIRE(calculateLesson4(0) == 0);
  }
  SECTION("Test3")
  {
    REQUIRE(calculateLesson4(-3) == 0);
  }
}
