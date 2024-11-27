#include <iostream>
#include <queue>
#include <vector>
#include <gtest/gtest.h>

namespace std {

    int bfs(vector<vector<int>>& adj, int s) 
    {
        int curr = 0;
	int res = 0;
	queue<int> q;  
    
	vector<bool> visited(adj.size(), false);
        visited[s] = true;
        q.push(s);

        while (!q.empty()) {
      
            curr = q.front();
            q.pop();
	    res += curr;
	
            for (int x : adj[curr]) {
                if (!visited[x]) {
                    visited[x] = true;
                     q.push(x);
                 }
             }
         }
         return res;
    }

    void addEdge(vector<vector<int>>& adj,
                          int u, int v) 
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}
