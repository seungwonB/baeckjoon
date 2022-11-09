#include<iostream>
#include<algorithm>
#include<queue>
#define MAX 100001
using namespace std;

void BFS(int N, int K) {
	queue<pair<int, int>> q;
	bool visited[MAX] = {false, };

	q.push(make_pair(N, 0));
	visited[N] = true;
	
	while(!q.empty()) {
		int cur_N = q.front().first;
		int dist = q.front().second;
		q.pop();
		
		if (cur_N == K) {
			cout << dist;
			break;
		}
		
		if (cur_N - 1 >= 0 && !visited[cur_N - 1]) {
			visited[cur_N - 1] = true;
			q.push({cur_N - 1, dist + 1});
		}
		if (cur_N + 1 < MAX && !visited[cur_N + 1]) {
			visited[cur_N + 1] = true;
			q.push({cur_N + 1, dist + 1});
		}
		if (cur_N * 2 < MAX && !visited[cur_N * 2]) {
			visited[cur_N * 2] = true;
			q.push({cur_N * 2, dist + 1});
		}
	}
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int N, K;
	cin >> N >> K;
	BFS(N, K);
	return 0;	
}
