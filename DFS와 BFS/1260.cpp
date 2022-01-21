#include <cstdio>
#include <queue>
#include <stack>
#define MAX 1001

using namespace std;

int vertex_num, link_num, start_vertex;
int graph[MAX][MAX];
bool visited[MAX];

void init() {
	for (int i = 1; i <= vertex_num; i++) {
		visited[i] = 0;
	}
}

void DFS(int start_vertex) {
	visited[start_vertex] = true;
	printf("%d ", start_vertex);

	for (int i = 1; i <= vertex_num; i++) {
		if (graph[start_vertex][i] == 1 && visited[i] == 0)
			DFS(i);
	}
}

void BFS(int start_vertex) {
	queue<int> q;
	q.push(start_vertex);

	while (!q.empty()) {
		int out = q.front();
		q.pop();

		if (visited[out] == false) {
			visited[out] = true;
			printf("%d ", out);
		}

		for (int i = 1; i <= vertex_num; i++) {
			if (graph[out][i] == 1 && visited[i] == false)
				q.push(i);
		}
	}
}

int main() {
	scanf("%d %d %d", &vertex_num, &link_num, &start_vertex);
	
	int vertex1, vertex2;

	for (int i = 0; i < link_num; i++) {
		scanf("%d %d", &vertex1, &vertex2);
		graph[vertex1][vertex2] = 1;
		graph[vertex2][vertex1] = 1;
	}

	init();
	DFS(start_vertex);

	printf("\n");
	init();
	BFS(start_vertex);

	return 0;
}
