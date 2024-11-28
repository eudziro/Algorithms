#include <bits/stdc++.h>
#include <algorithm>

namespace std {

#define INF 0x3f3f3f3f

typedef pair<int, int> iPair;

class Graph {
    int V; // Number of vertices
    list<iPair> *adj; // Adjacency list

public:
    Graph(int V); // Constructor

    void addEdge(int u, int v, int w); // Function to add an edge
    void shortestPath(int s); // Function to print shortest path from source
};

// Constructor to allocate memory for the adjacency list
Graph::Graph(int V) {
    this->V = V;
    adj = new list<iPair>[V];
}

// Function to add an edge to the graph
void Graph::addEdge(int u, int v, int w) {
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w)); // Since the graph is undirected
}

// Function to print shortest paths from source
    void Graph::shortestPath(int src) {
        priority_queue<iPair, vector<iPair>, greater<iPair>> pq;

        vector<int> dist(V, INF);
        pq.push(make_pair(0, src));
        dist[src] = 0;

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            for (auto &neighbor : adj[u]) {
                int v = neighbor.first;
                int weight = neighbor.second;

                if (dist[v] > dist[u] + weight) {
                    dist[v] = dist[u] + weight;
                    pq.push(make_pair(dist[v], v));
            	}
            }
    	}

    	cout << "Vertex Distance from Source" << endl;
    	for (int i = 0; i < V; ++i)
        	cout << i << " \t\t " << dist[i] << endl;
	}

}

int main() {
    int V = 9; // Number of vertices
    std::Graph g(V);

    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);

    g.shortestPath(0);

    return 0;
}
