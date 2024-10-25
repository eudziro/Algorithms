#include <gtest/gtest.h>
#include "linearSearch.cpp"

using vec = std::vector<int>;

TEST(searchTEST, test1) {
    EXPECT_EQ(5, search(vec{10, 50, 100, 51, 11, 1, -1, 0, -55, 16}, 1));
    EXPECT_EQ(0, search(vec{10, 50, 100, 51, 11, 1, -1, 0, -55, 16}, 10));
    EXPECT_EQ(2, search(vec{10, 50, 100, 51, 11, 1, -1, 0, -55, 16}, 100));
    EXPECT_EQ(-1, search(vec{10, 50, 100, 51, 11, 1, -1, 0, -55, 16}, 15));
}

// TEST()

int main () {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
