for _ in range(int(input())):
    n = int(input())
    arr_1 = list(map(int, input().split()))
    arr_2 = list(map(int, input().split()))
    max_num = 0
    max_num_1 = 0
    for i, j in zip(arr_1, arr_2):
        max_num = max(max_num, i, j)
        max_num_1 = max(max_num_1, min(i, j))

    print(max_num*max_num_1)

