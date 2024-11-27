#include "bfs.cc"

namespace std {

    TEST(MathTest, TwoPlusTwoEqualsFour) {
        EXPECT_EQ(2 + 2, 4);
    }

    TEST(bfsTEST, Testing) {
	int V = 5; vector<vector<int>> adj(V);
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 4);

	EXPECT_EQ(10, bfs(adj, 0));
	}
}

    int main(int argc, char **argv) {
        ::testing::InitGoogleTest( &argc, argv );
        return RUN_ALL_TESTS();
    }

