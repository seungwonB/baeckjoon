N = int(input())
r1, c1, r2, c2 = map(int,input().split())
visited = [[0] * N for _ in range(N)]

def bfs(y, x):
    q = []
    q.append((y, x, 0))
    flag = False
    dy = [-2, -2, 0, 0, 2, 2]
    dx = [-1, 1, -2, 2, -1, 1]

    while len(q) != 0:
        cur_y = q[0][0]
        cur_x = q[0][1]
        dist = q[0][2]
        visited[cur_y][cur_x] = 1
        q.pop(0)

        for i in range(6):
            ny = cur_y + dy[i]
            nx = cur_x + dx[i]

            if ny == r2 and nx == c2:
                flag = True
                print(dist + 1)
                visited[ny][nx] = 1
                break

            if ny >=0 and nx >= 0 and ny < N and nx < N:
                if visited[ny][nx] == 0:
                    visited[ny][nx] = 1
                    q.append((ny ,nx, dist + 1))

        if flag:
            break

bfs(r1, c1)
if visited[r2][c2] == 0:
    print(-1)
