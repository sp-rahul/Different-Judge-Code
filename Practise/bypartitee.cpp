
#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}
bool isBipartite(vector<int> adj[], int v,
				vector<bool>& visited, vector<int>& color)
{

	for (int u : adj[v]) {

		// if vertex u is not explored before
		if (visited[u] == false) {

			// mark present vertices as visited
			visited[u] = true;

			// mark its color opposite to its parent
			color[u] = !color[v];

			// if the subtree rooted at vertex v is not bipartite
			if (isBipartite(adj, u, visited, color)==false)
				return false;
		}

		// if two adjacent are colored with same color then
		// the graph is not bipartite
		else if (color[u] == color[v])
			return false;
	}
	return true;
}

// Driver Code
int main()
{
	// no of nodes
	int N = 6;

	vector<int> adj[N + 1];

	
	vector<bool> visited(N + 1);

	vector<int> color(N + 1);

	addEdge(adj, 1, 2);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);
	addEdge(adj, 4, 5);
	addEdge(adj, 5, 6);
	addEdge(adj, 6, 1);

	visited[1] = true;
	color[1] = 0;

	if (isBipartite(adj, 1, visited, color)) {
		cout << "Graph is Bipartite";
	}
	else {
		cout << "Graph is not Bipartite";
	}

	return 0;
}
