# 킹, 퀸, 룩, 비숍, 나이트, 폰 1 1 2 2 2 8
piece = list(map(int,input().split()))
pieces = [1, 1, 2, 2, 2, 8]
for i in range(len(piece)):
    piece[i] = pieces[i] - piece[i]
    print(piece[i])