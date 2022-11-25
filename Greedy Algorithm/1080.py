N, M = list(map(int, input().split()))
A = [ list(map( int, list(input()) )) for i in range(N) ]
B = [ list(map( int, list(input()) )) for i in range(N) ]

cnt = 0
for i in range(N-2):
    for j in range(M-2):
        if A[i][j] != B[i][j]:
            for k in range(i, i+3):
                for l in range(j, j+3):
                    A[k][l] = 1 - A[k][l]
            cnt += 1
        else:
            continue

if A != B:
    print(-1)
else:
    print(cnt)