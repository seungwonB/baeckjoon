#include <iostream>
#include <algorithm>
#include <queue>
#define MAX 8
using namespace std;

int n, m, ans = 0;
int lab[MAX][MAX];
int temp[MAX][MAX];
int dy[4] = {0, 0, 1, -1};
int dx[4] = {1, -1, 0, 0};
bool visited[MAX][MAX];

void copy(int arr1[MAX][MAX], int arr2[MAX][MAX]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr2[i][j] = arr1[i][j]; 
		}
	}
}

void bfs() {
	int virus[MAX][MAX];
	copy(temp, virus);
	
	queue<pair<int, int>> q;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (virus[i][j] == 2) 
				q.push({i, j});
		}
	}
	
	while(!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			
			if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
			if (virus[ny][nx] == 0) {
				virus[ny][nx] = 2;
				q.push({ny, nx});
			}
		}
	}
	
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (virus[i][j] == 0) cnt++;
		}
	}
	ans = max(ans, cnt);
}

void wall(int cnt) {
	if (cnt == 3) {
		bfs();
		return;
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (temp[i][j] == 0) {
				temp[i][j] = 1;
				wall(cnt++);
				temp[i][j] = 0;
			}
		}
	}
}

int main(){
	cin >> n >> m;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> lab[i][j];
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (lab[i][j] == 0) {
				memset(visited, 0, sizeof(visited));				
				copy(lab, temp);
				temp[i][j] = 1;
				wall(1);
				temp[i][j] = 0;
			}
		}
	}
	cout << ans;
}
