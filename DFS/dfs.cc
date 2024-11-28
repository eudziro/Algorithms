#include <gtest/gtest.h>
#include <algorithm>
#include <vector>

namespace std {

	void addEdge(vector<vector<int>> &adj, int s, int t){
		adj[s].push_back(t);
		adj[t].push_back(s);
	}

	// Recursive function for DFS traversal
	int DFSRec(vector<vector<int>> &adj, vector<bool> &visited,int s){
		// Mark the current vertex as visited
		visited[s] = true;

		// Print the current vertex
		int res = 0;

		// Recursively visit all adjacent vertices that are not visited yet
		for (int i : adj[s])
			if (visited[i] == false)
				DFSRec(adj, visited, i);
		return res += s;
	}

	// Main DFS function to perform DFS for the entire graph
	int DFS(vector<vector<int>> &adj){
		vector<bool> visited(adj.size(), false);
		int i;

		for (i = 0; i < adj.size(); i++){
			if (visited[i] == false){
				// perform DFS from it
				DFSRec(adj, visited, i);
			}
		}
	return DFSRec(adj, visited, i);
	}
}
