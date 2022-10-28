from collections import deque

def solution():
    answer = []
    T = int(input()) # 테스트 케이스

    for i in range(T):
        y, x, cabbages = map(int, input().split()) # 세로, 가로, 배추의 갯수
        graph = [[0]*x for _ in range(y)]  # 그래프 배열

        for i in range(cabbages):
            y_index, x_index = map(int, input().split())
            graph[y_index][x_index] = 1

        visited = [[False]*x for _ in range(y)]
        cnt_earthworm = 0

        for i in range(y):
            for j in range(x):
                if graph[i][j] == 1:
                    BFS(y, x, graph, i, j, visited)
                    cnt_earthworm += 1

        print(cnt_earthworm)

def BFS(y, x, graph, i, j, visited):
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
            if next_y >= 0 and next_x >= 0 and next_y < y and next_x < x:
                # 해당 값이 0이 아니고 방문하지 않았을 때
                if graph[next_y][next_x] != 0 and visited[next_y][next_x] == 0:
                    # 방문 처리
                    visited[next_y][next_x] = True
                    # 인접한 노드는 가중치 증가
                    graph[next_y][next_x] = 0
                    queue.append((next_y, next_x))

solution()
