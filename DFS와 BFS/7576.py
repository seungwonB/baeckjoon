from collections import deque

def solution():
    answer = []
    M, N = map(int, input().split()) # 가로, 세로
    matrix = [list(map(int, input().split())) for _ in range(N)] # 토마토 받아서 넣기

    start_position = deque() # 토마토가 있는 곳
    res = 0

    for i in range(N):
        for j in range(M):
            if matrix[i][j] == 1:
                start_position.append([i, j])

    BFS(N, M, matrix, start_position)

    for i in matrix:
        for j in i:
            if j == 0:
                print(-1)
                exit(0)
        res = max(res, max(i))
        
    print(res - 1)

def BFS(y, x, graph, start_position:deque):
    # 큐 생성
    queue = start_position
    # 동 서 남 북
    dx = [1, -1, 0, 0]
    dy = [0, 0, 1, -1]
    # 큐가 빌 떄 까지
    while queue:
        # 현재 y, x 큐에서 꺼냄
        cur_y, cur_x = queue.popleft()
        # 방문 처리
        for k in range(4):
            # 동 서 남 북 으로 이동
            next_y = cur_y + dy[k]
            next_x = cur_x + dx[k]

            # 밖으로 나가지 않고 N,M보다 크지 않을 때
            if next_y >= 0 and next_x >= 0 and next_y < y and next_x < x:
                # 해당 값이 0일 때
                if graph[next_y][next_x] == 0:
                    # 인접한 노드는 가중치 증가
                    graph[next_y][next_x] = graph[cur_y][cur_x] + 1
                    queue.append((next_y, next_x))

solution()
