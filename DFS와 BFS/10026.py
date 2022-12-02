import copy
N = int(input())
RGB = [list(map(str, input())) for _ in range(N)]
RGB2 = copy.deepcopy(RGB)

def bfs(y, x, arr, color):
    q = []
    q.append((y, x))
    # 갈 수 있는 방향
    dy = [0, 0, -1, 1]
    dx = [1, -1, 0, 0]

    while len(q) != 0:
        # 현재 위치
        cur_y = q[0][0]
        cur_x = q[0][1]
        q.pop(0)
        # 갔던 곳 방문 체크
        visited[cur_y][cur_x] = 1

        for i in range(4):
            ny = cur_y + dy[i]
            nx = cur_x + dx[i]

            if ny >=0 and nx >= 0 and ny < N and nx < N:
                if visited[ny][nx] == 0 and arr[ny][nx] == color:
                    visited[ny][nx] = 1
                    arr[ny][nx] = 1
                    q.append((ny, nx))

# 정상인
answer = 0
visited = [[0] * N for _ in range(N)]
for i in range(N):
    for j in range(N):
        if RGB[i][j] == "R":
            bfs(i, j, RGB, "R")
            answer += 1
        elif RGB[i][j] == "G":
            bfs(i, j, RGB, "G")
            answer += 1
        elif RGB[i][j] == "B":
            bfs(i, j, RGB, "B")
            answer += 1

# 적록색약
for i in range(N):
    for j in range(N):
        if RGB2[i][j] == "G":
            RGB2[i][j] = "R"

visited = [[0] * N for _ in range(N)]
answer2 = 0
for i in range(N):
    for j in range(N):
        if RGB2[i][j] == "R":
            bfs(i, j, RGB2, "R")
            answer2 += 1
        elif RGB2[i][j] == "B":
            bfs(i, j, RGB2, "B")
            answer2 += 1

print(answer, answer2)