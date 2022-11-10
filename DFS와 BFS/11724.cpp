#include <iostream>
#include <queue>
#define MAX 1001
using namespace std;

int N, M;
int graph[MAX][MAX];
bool visited[MAX] = {false, };

void BFS(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        
        for(int i = 1; i <= N; i++) {
            if (graph[v][i] == 1 && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, connected = 0;
    cin >> N >> M; // ���� ��, ���� ��
    
    for(int i = 0; i < M; i++) {
        cin >> a >> b;
        graph[a][b] = 1; // ���� ó��
        graph[b][a] = 1;
    }
    
    for(int i = 1; i<= N; i++) { // N�� 1�̻��� ������ �ֱ� ������
        if (!visited[i]) {
            BFS(i);
            connected++;
        }
    }
    cout << connected;
    return 0;
}
