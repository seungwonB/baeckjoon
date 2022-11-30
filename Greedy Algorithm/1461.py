N, M = map(int, input().split())
arr = list(map(int, input().split()))
answer = 0
arr.sort()
pos = 10001
for i in range(len(arr)):
    if arr[i] > 0:
        pos = i # 양수 위치 찾기
        break

if N == 1: # N이 1인 경우
    answer = abs(arr[0])
elif pos == 10001: # 양수가 없는 경우
    for i in range(0, N, M): # 모든 원소 계산
        answer += abs(arr[i]) * 2
    answer -= abs(arr[0])
else:
    for i in range(0, pos, M): # 양수 전까지 음수들
        answer += abs(arr[i]) * 2

    for i in range(N-1, pos-1, -M): # 음수 전까지 양수들
        answer += arr[i] * 2

    answer -= max(abs(arr[0]), abs(arr[-1])) # 가장 큰 값 빼기
print(answer)