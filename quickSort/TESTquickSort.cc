#include "quickSort.cc"

    TEST(MathTest, TwoPlusTwoEqualsFour) {
        EXPECT_EQ(2 + 2, 4);
    }

    TEST(quickSortTEST, Testing) {
	std::vector<int> arr = {10, 7, 8, 9, 1, 5};
	int n = arr.size(); quickSort(arr, 0, n-1);
	EXPECT_EQ(7, arr[2]); EXPECT_EQ(8, arr[3]);
	EXPECT_EQ(9, arr[4]); EXPECT_EQ(1, arr[0]);
	}


    int main(int argc, char **argv) {
        ::testing::InitGoogleTest( &argc, argv );
        return RUN_ALL_TESTS();
    }
