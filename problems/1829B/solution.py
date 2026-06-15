for _ in range(int(input())):
    n = int(input())

    arr = list(map(int, input().split()))

    max_zeros = 0
    temp_zeros = 0

    for i in arr:

        if i == 0:
            temp_zeros += 1
        
        if temp_zeros > max_zeros:
            max_zeros = temp_zeros
        
        if i != 0:
            temp_zeros = 0

    print(max_zeros)