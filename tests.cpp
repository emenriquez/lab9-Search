// test file - do not modify
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <ctime>
#include <iostream>
using namespace std;

#include "Search.h" 

TEST_CASE("setup") {
    CHECK(1==1);
}

TEST_CASE("seqSearch") {
    CHECK(1==1);
}

TEST_CASE("binSearch") {
    float arr[5] = {1.0, 2.3, 2.2, 1.4, 0.6};

    // check for values
    CHECK(binSearch(2.3, arr, 5) == true);
    CHECK(binSearch(2.4, arr, 5) == false);

    float arr2[1] = {3.3};

    REQUIRE_NOTHROW(binSearch(0.0, arr2, 1));
    CHECK(binSearch(0.0, arr2, 1) == false);
    CHECK(binSearch(3.3, arr2, 1) == true);
}

TEST_CASE("binSearchR") {
    char arr[5] = {'h', 'e', 'l', 'o', '!'};

    // check for values
    CHECK(binSearchR('o', arr, 5) == true);
    CHECK(binSearchR('x', arr, 5) == false);

    char arr2[1] = {'?'};

    REQUIRE_NOTHROW(binSearchR('y', arr2, 1));
    CHECK(binSearchR('y', arr2, 1) == false);
    CHECK(binSearchR('?', arr2, 1) == true);
}

TEST_CASE("swap") {
    double myDarray[5] = {5.0, 0.0, 4.0, 6.0, 3.0};
    REQUIRE_NOTHROW(swap(myDarray, 1, 3));
    CHECK(myDarray[1] != myDarray[3]);
    CHECK(myDarray[1] == 6.0);
    CHECK(myDarray[3] == 0.0);
}

TEST_CASE("minFind") {
    double myDarray[5] = {5.0, -3.0, 4.0, 6.0, 3.0};
    REQUIRE_NOTHROW(minFind(myDarray, 5));
    CHECK(minFind(myDarray, 5) == 1);
}

TEST_CASE("newSort") {
    double myDarray[5] = {5.0, -3.0, 4.0, 6.0, 3.0};
    double sortArr[5] = {-3.0, 3.0, 4.0, 5.0, 6.0};
    REQUIRE_NOTHROW(newSort(myDarray, 5));
    for(int i = 0; i < 5; i++) {
        CHECK(myDarray[i] == sortArr[i]);
    }
}