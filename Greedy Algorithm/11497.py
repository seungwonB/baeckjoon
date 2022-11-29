tc = int(input())

for t in range(tc):
    N = int(input())
    arr = list(map(int, input().split()))
    new_list = []
    arr.sort()

    for i in range(len(arr)):
        if i % 2 == 0:
            new_list.append(arr[i])

    for i in range(len(arr)-1, 0, -1):
        if i % 2 != 0:
            new_list.append(arr[i])

    max_num = abs(new_list[0] - new_list[-1])
    for i in range(1, len(new_list)):
        max_num = max(abs(new_list[i-1]-new_list[i]), max_num)
        
    print(max_num)