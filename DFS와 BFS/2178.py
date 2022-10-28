# 최단 경로는 BFS
# 1. 방문할 수 있는 곳들을 방문하여 가중치를 증가 시킨다.
# 2. 그 가중치 값을 출력하면 답.

from collections import deque

def solution():
    # 가로 세로 입력
    N, M = map(int, input().split())
    graph = []

    # 미로 입력
    for _ in range(N):
        graph.append(list(map(int, input())))

    # 방문 배열 초기화
    visited = [[False for j in range(M)] for i in range(N)]

    print(BFS(0, 0, graph, visited, N, M)
)

def BFS(i, j, graph, visited, N, M):
    # 큐 생성
    queue = deque()
    # 동 서 남 북
    dx = [1, -1, 0, 0]
    dy = [0, 0, 1, -1]
    # 시작 노드 큐에 삽입
    queue.append((i, j))

    # 큐가 빌 떄 까지
    while queue:
        # 현재 y, x 큐에서 꺼냄
        cur_y, cur_x = queue.popleft()
        # 방문 처리
        visited[i][j] = True

        for k in range(4):
            # 동 서 남 북 으로 이동
            next_y = cur_y + dy[k]
            next_x = cur_x + dx[k]

            # 밖으로 나가지 않고 N,M보다 크지 않을 때
            if next_y >= 0 and next_x >= 0 and next_y < N and next_x < M:
                # 해당 값이 0이 아니고 방문하지 않았을 때
                if graph[next_y][next_x] != 0 and visited[next_y][next_x] == 0:
                    # 방문 처리
                    visited[next_y][next_x] = True
                    # 인접한 노드는 가중치 증가
                    graph[next_y][next_x] = graph[cur_y][cur_x] + 1
                    queue.append((next_y, next_x))
    return graph[N-1][M-1]
solution()