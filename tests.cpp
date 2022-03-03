#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"

TEST_CASE("Rectangle")
{
    SECTION("Positive area")
    {
        Rectangle rect(2, 3);
        REQUIRE(rect.area() == 6);
        rect.set_values(5, 6);
        REQUIRE(rect.area() == 30);
        rect.set_values(1, 1);
        REQUIRE(rect.area() == 1);
        rect.set_values(3, 1);
        REQUIRE(rect.area() == 3);
        rect.set_values(50, 6);
        REQUIRE(rect.area() == 300);
    }
    SECTION("Negative area or zero")
    {
        Rectangle rect(2, 3);
        REQUIRE_THROWS_AS(rect.set_values(-1, 1), std::invalid_argument);
        REQUIRE_THROWS_AS(rect.set_values(2, -1), std::invalid_argument);
        REQUIRE_THROWS_AS(rect.set_values(0, 1), std::invalid_argument);
        REQUIRE_THROWS_AS(rect.set_values(3, 0), std::invalid_argument);
    }
}

TEST_CASE("Triangle")
{
    SECTION("Positive area")
    {
        Triangle tri(2, 5);
        REQUIRE(tri.area() == 5);
        tri.set_values(10, 10);
        REQUIRE(tri.area() == 50);
        tri.set_values(3, 6);
        REQUIRE(tri.area() == 9);
        tri.set_values(7, 7);
        REQUIRE(tri.area() == 24.5);
        tri.set_values(1, 1);
        REQUIRE(tri.area() == 0.5);
    }
    SECTION("Negative area or zero")
    {
        Triangle tri(2, 5);
        REQUIRE_THROWS_AS(tri.set_values(-1, 1), std::invalid_argument);
        REQUIRE_THROWS_AS(tri.set_values(2, -1), std::invalid_argument);
        REQUIRE_THROWS_AS(tri.set_values(0, 1), std::invalid_argument);
        REQUIRE_THROWS_AS(tri.set_values(3, 0), std::invalid_argument);
    }   
}

TEST_CASE("Circle")
{
    SECTION("Positive radius")
    {
        Circle circ(6);
        REQUIRE(circ.area() == Approx(113.097));
        circ.set_radius(1);
        REQUIRE(circ.area() == Approx(3.14159));
    }
    SECTION("Negative or 0 radius")
    {
        Circle circ(4);
        REQUIRE_THROWS_AS(circ.set_radius(0), std::invalid_argument);
        REQUIRE_THROWS_AS(circ.set_radius(-2), std::invalid_argument);
        REQUIRE_THROWS_AS(circ.set_radius(-100), std::invalid_argument);
    }
}