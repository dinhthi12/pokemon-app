#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "what_triangle.cpp"
#include <sstream>

TEST_CASE("Test triangle")
{
  SECTION("Test case for not triangle")
  {
    REQUIRE(check_triangle(2.0f, 1.0f, 3.0f) == std::string("Tam giac khong hop le. Xin kiem tra lai !"));
  }
  SECTION("Test case for equilateral triangle")
  {
    REQUIRE(check_triangle(3.0f, 3.0f, 3.0f) == std::string("Deu"));
  }
}
