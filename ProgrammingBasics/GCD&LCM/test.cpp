#include <vector>

#include "gtest/gtest.h"
#include "gcdLcm.hpp"

class GCDFixture : public ::testing::TestWithParam<std::tuple<int, int, int>> {
};

TEST_P(GCDFixture, ShouldCalculateGCD) {
    int first = std::get<0>(GetParam());
    int second = std::get<1>(GetParam());
    int expected_result = std::get<2>(GetParam());
    EXPECT_EQ(GCD(first, second), expected_result);
}

INSTANTIATE_TEST_SUITE_P(
    GCDFixtureTest,
    GCDFixture,
    ::testing::Values(
        std::make_tuple(10, 10, 10),
        std::make_tuple(44, 123, 1),
        std::make_tuple(123, 44, 1),
        std::make_tuple(891, 33, 33),
        std::make_tuple(23122, 322, 2),
        std::make_tuple(4345, 25, 5),
        std::make_tuple(65464, 344324, 4),
        std::make_tuple(2, 2, 2),
        std::make_tuple(1, 1, 1),
        std::make_tuple(1, 0, 1),
        std::make_tuple(0, 1, 1),
        std::make_tuple(0, 10, 10),
        std::make_tuple(0, 0, 0),
        std::make_tuple(-10, -2, 2),
        std::make_tuple(-10, 2, 2),
        std::make_tuple(10, -2, 2)

        // results based on implementation of std::gcm
        ));

class LCMFixture : public ::testing::TestWithParam<std::tuple<int, int, int>> {
};

TEST_P(LCMFixture, ShouldCalculateLCM) {
    int first = std::get<0>(GetParam());
    int second = std::get<1>(GetParam());
    int expected_result = std::get<2>(GetParam());
    EXPECT_EQ(LCM(first, second), expected_result);
}

INSTANTIATE_TEST_SUITE_P(
    LCMFixtureTest,
    LCMFixture,
    ::testing::Values(
        std::make_tuple(24, 36, 72),
        std::make_tuple(50, 17, 850),
        std::make_tuple(50, 30, 150),
        std::make_tuple(23122, 322, 3722642),
        std::make_tuple(28, 14, 28),
        std::make_tuple(105, 25, 525),
        std::make_tuple(0, 0, 0),
        std::make_tuple(1, 0, 0),
        std::make_tuple(0, 1, 0),
        std::make_tuple(0, -2, 0),
        std::make_tuple(1, 1, 1),
        std::make_tuple(-1, 1, 1),
        std::make_tuple(1, -1, 1),
        std::make_tuple(-1, -1, 1),
        std::make_tuple(-10, -10, 10),
        std::make_tuple(-10, -2, 10)

        // based on implementation of std::lcm
        ));
