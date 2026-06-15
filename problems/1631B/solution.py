import math
 
for t in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))[::-1]
 
    target = arr[0]
    ops = 0
    i = 0
    while i < n:
        e = arr[i]
        if e != target:
            ops += 1
            i *= 2
            continue
        i += 1
    
    print(ops)
        
    # nums = math.ceil(math.log2(n))
    # indices = [2 ** i for i in range(nums+1)]
    # ops = 0
 
    # for i in range(nums):
    #     if set(arr[(indices[i]):indices[i+1]]) != {target}:
    #         ops += 1
 