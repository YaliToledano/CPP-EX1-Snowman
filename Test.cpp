#include "doctest.h"
#include "snowman.hpp"

#include <string>
using namespace std;

TEST_CASE("lower-case snowman code") {
    CHECK(ariel::snowman(11111111) == string("\n _===_ \n (.,.) \n<( : )>\n ( : ) "));
}
TEST_CASE("Good snowman code") {
    CHECK(ariel::snowman(12341234) == string("\n _===_ \n (O.-) \n<(> <)/\n (   ) "));
}
TEST_CASE("Good snowman code") {
    CHECK(ariel::snowman(42424242) == string("\n  ___  \n (_*_) \n (-.o) \n (   )/\n (\" \") "));
}
TEST_CASE("upper-case good snowman code") {
    CHECK(ariel::snowman(44444444) == string("\n  ___  \n (_*_) \n (- -) \n (   ) \n (   ) "));
}
TEST_CASE("random good snowman code") {
    CHECK(ariel::snowman(31243134) == string("\n   _   \n  /_\\  \n (o,-) \n/(> <)>\n (   ) "));
}
TEST_CASE("Good snowman code") {
    CHECK(ariel::snowman(11114412) == string("\n _===_ \n (.,.) \n ( : ) \n (\" \") "));
}
TEST_CASE("Good snowman code") {
    CHECK(ariel::snowman(31311323) == string("\n   _   \n  /_\\  \n (O,.) \n<(] [)\\\n (___) "));
}
TEST_CASE("Good snowman code") {
    CHECK(ariel::snowman(22234111) == string("\n  ___  \n ..... \n (o.O) \n ( : )>\n ( : ) "));
}
TEST_CASE("Good snowman code") {
    CHECK(ariel::snowman(21113343) == string("\n  ___  \n ..... \n (.,.) \n/(   )\\\n (___) "));
}
TEST_CASE("Good snowman code") {
    CHECK(ariel::snowman(33243214) == string("\n   _   \n  /_\\  \n (o_-) \n/( : )/\n (   ) "));
}
TEST_CASE("Good snowman code") {
    CHECK(ariel::snowman(14312422) == string("\n _===_ \n (O .) \n\\(] [) \n (\" \")"));
}
TEST_CASE("Good snowman code") {
    CHECK(ariel::snowman(13333333) == string("\n _===_ \n (O_O) \n/(> <)\\\n (___) "));
}
TEST_CASE("Good snowman code") {
    CHECK(ariel::snowman(42342241) == string("\n  ___  \n (_*_) \n (O.-) \n\\(   )/\n ( : ) "));
}
TEST_CASE("start-illigal number bad snowman code") {
    CHECK(ariel::snowman(51114411) == string("Syntax Error - Non valid digit/s, must be between 1-4"));
}
TEST_CASE("end-illigal number bad snowman code") {
    CHECK(ariel::snowman(21334417) == string("Syntax Error - Non valid digit/s, must be between 1-4"));
}
TEST_CASE("middle-illigal number bad snowman code") {
    CHECK(ariel::snowman(22229411) == string("Syntax Error - Non valid digit/s, all digits must be between 1-4"));
}
TEST_CASE("9 digits bad snowman code") {
    CHECK(ariel::snowman(131114411) == string("Syntax Error - Must be Exacly 8-digits long"));
}
TEST_CASE("7 digits bad snowman code") {
    CHECK(ariel::snowman(1121211) == string("Syntax Error - Must be Exacly 8-digits long"));
}
TEST_CASE("Good snowman code") {
    CHECK(ariel::snowman(-134124123) == string("Syntax Error - int cannot be negative"));
}
TEST_CASE("zero case bad snowman code") {
    CHECK(ariel::snowman(0) == string("Syntax Error - Must be Exacly 8-digits long"));
}
TEST_CASE("zero-start bad snowman code") {
    CHECK(ariel::snowman(01224313) == string("Syntax Error - Must be Exacly 8-digits long"));
}
TEST_CASE("two zero bad snowman code") {
    CHECK(ariel::snowman(00114411) == string("Syntax Error - Must be Exacly 8-digits long"));
}

