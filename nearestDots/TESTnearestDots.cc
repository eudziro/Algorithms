#include "nearestDots.cc"

    TEST(MathTest, TwoPlusTwoEqualsFour) {
        EXPECT_EQ(2 + 2, 4);
    }

    TEST(ClosestDistance, Testing) {
	Point P[] = {{2, 3}, {12, 30}, {40, 50}, {5, 1}, {12, 10}, {3, 4}};
	int n = sizeof(P) / sizeof(P[0]);
	EXPECT_NEAR(1.41421, closest(P, n), 0.1);
	Point A[] = {{2,4}, {44, 35}, {652, 72}, {222, 20}, {88, 42}, {21, 242}};
	n = sizeof(A) / sizeof(A[0]);
	EXPECT_NEAR(44.5533, closest(A, n), 0.1);
	}


    int main(int argc, char **argv) {
        ::testing::InitGoogleTest( &argc, argv );
        return RUN_ALL_TESTS();
    }
