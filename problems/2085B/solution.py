for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    zero_index = [i for i in range(len(arr)) if arr[i] == 0]
 
    zeroes = len(zero_index)
 
    if zeroes == 0:
        print(1)
        print(1, n)
    
    elif zeroes == 1:
        if zero_index[0] == 0:
            print(2)
            print(1, 2)
            n -= 1
            print(1, n)
        else:
            print(2)
            print(zero_index[0], zero_index[0] + 1)
            n -= 1
            print(1, n)
 
    else:
        if 0 in zero_index and n-1 in zero_index:
            print(3)
            print(1, 2)
            print(2, n-1)
            print(1, 2)
        else:
            print(2)
            print(zero_index[0] + 1, zero_index[-1] + 1)
            n -= zero_index[-1] - zero_index[0]
            print(1, n)
