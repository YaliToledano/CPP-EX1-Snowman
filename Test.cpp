#include "doctest.h"
#include "snowman.hpp"

#include <string>
using namespace std;

TEST_CASE("lower-case snowman code") {
    CHECK(ariel::snowman(11111111) == string("\n_===_\n(.,.)\n( : )\n( : )"));
}
TEST_CASE("Good snowman code") {
    CHECK(ariel::snowman(12341234) == string("\n_===_\n(.,.)\n( : )\n( : )"));
}
TEST_CASE("Good snowman code") {
    CHECK(ariel::snowman(42424242) == string("\n_===_\n(.,.)\n( : )\n( : )"));
}
TEST_CASE("upper-case good snowman code") {
    CHECK(ariel::snowman(44444444) == string("\n_===_\n(.,.)\n( : )\n( : )"));
}
TEST_CASE("random good snowman code") {
    CHECK(ariel::snowman(11243134) == string("\n===_\n(.,.)\n( : )\n( : )"));
}
TEST_CASE("start-illigal number bad snowman code") {
    CHECK(ariel::snowman(51114411) == string("\n_===_\n(.,.)\n( : )\n( : )"));
}
TEST_CASE("end-illigal number bad snowman code") {
    CHECK(ariel::snowman(11114417) == string("\n_===_\n(.,.)\n( : )\n( : )"));
}
TEST_CASE("middle-illigal number bad snowman code") {
    CHECK(ariel::snowman(22229411) == string("\n_===_\n(.,.)\n( : )\n( : )"));
}
TEST_CASE("9 digits bad snowman code") {
    CHECK(ariel::snowman(131114411) == string("\n_===_\n(.,.)\n( : )\n( : )"));
}
TEST_CASE("7 digits bad snowman code") {
    CHECK(ariel::snowman(1111411) == string("\n_===_\n(.,.)\n( : )\n( : )"));
}
TEST_CASE("Good snowman code") {
    CHECK(ariel::snowman(-11114411) == string("\n_===_\n(.,.)\n( : )\n( : )"));
}
TEST_CASE("zero case bad snowman code") {
    CHECK(ariel::snowman(0) == string("\n_===_\n(.,.)\n( : )\n( : )"));
}
TEST_CASE("Good snowman code") {
    CHECK(ariel::snowman(11114411) == string("\n_===_\n(.,.)\n( : )\n( : )"));
}
TEST_CASE("zero-start bad snowman code") {
    CHECK(ariel::snowman(01114411) == string("\n_===_\n(.,.)\n( : )\n( : )"));
}
TEST_CASE("two zero bad snowman code") {
    CHECK(ariel::snowman(00114411) == string("\n_===_\n(.,.)\n( : )\n( : )"));
}
TEST_CASE("Good snowman code") {
    CHECK(ariel::snowman(11114411) == string("\n_===_\n(.,.)\n( : )\n( : )"));
}
TEST_CASE("Good snowman code") {
    CHECK(ariel::snowman(11114411) == string("\n_===_\n(.,.)\n( : )\n( : )"));
}
TEST_CASE("Good snowman code") {
    CHECK(ariel::snowman(11114411) == string("\n_===_\n(.,.)\n( : )\n( : )"));
}
TEST_CASE("Good snowman code") {
    CHECK(ariel::snowman(11114211) == string("\n_===_\n(.,.)\n( : )\n( : )"));
}
TEST_CASE("Good snowman code") {
    CHECK(ariel::snowman(11314411) == string("\n_===_\n(.,.)\n( : )\n( : )"));
}
TEST_CASE("Good snowman code") {
    CHECK(ariel::snowman(13333333) == string("\n_===_\n(.,.)\n( : )\n( : )"));
}
TEST_CASE("Good snowman code") {
    CHECK(ariel::snowman(42312211) == string("\n_===_\n(.,.)\n( : )\n( : )"));
}
