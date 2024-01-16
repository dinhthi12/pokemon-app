#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "quadratic_solver.cpp"
#include <sstream>

TEST_CASE("Test quadratic equation solver")
{

    SECTION("Test case for an infinite solution")
    {
        REQUIRE(solveQuadraticEquation(2.0f, 1.0f, 3.0f) == std::string("infinite solution"));
    }
    SECTION("Test case for quadratic equation with distinct roots")
    {
        REQUIRE(solveQuadraticEquation(1.0f, -5.0f, 6.0f) == std::string("x1 = 3.000000 x2 = 2.000000"));
    }
    SECTION("Test case for linear equation")
    {
        REQUIRE(solveQuadraticEquation(0.0f, 3.0f, -6.0f) == std::string("x = 2.000000"));
    }
    SECTION("Test case for an infinite solution")
    {
        REQUIRE(solveQuadraticEquation(0.0f, 0.0f, 0.0f) == std::string("infinite solution"));
    }
     SECTION("Test case for quadratic equation with double roots")
    {
        REQUIRE(solveQuadraticEquation(1.0f, -6.0f, 9.0f) == std::string("x1 = x2 = 3.000000"));
    }
}
