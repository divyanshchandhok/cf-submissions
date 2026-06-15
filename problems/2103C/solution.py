import math

def get_pos(arr, l, r):
    global n, k
    ans = []
    num_less = 0
    # print(arr[l:r])
    for i, e in enumerate(arr[l:r]):
        # print('here')
        # print(i, e, k, num_less)
        if e <= k:
            num_less += 1
        if num_less >= math.ceil((i+1)/2):
            ans.append(i)

    return ans

def solve():
    global n, k
    n, k = map(int, input().split())

    arr = list(map(int, input().split()))
    first_pos = get_pos(arr, 0, n-2)
    last_pos = get_pos(arr[::-1], 0, n-2)
    middle_pos = []
    num_less = 0
    # print(first_pos, last_pos)
    # for i, e in enumerate(arr[:n-2]):
    #     # print(i, e, k, num_less)
    #     if e <= k:
    #         num_less += 1
    #     if num_less >= math.ceil((i+1)/2):
    #         first_pos.append(i)

    # num_less = 0

    # for i, e in enumerate(arr[::-1][:n-2]):
    #     # print(i, e, k, num_less)
    #     if e <= k:
    #         num_less += 1
    #     if num_less >= math.ceil((i+1)/2):
    #         last_pos.append(n-i-2)

    if not first_pos and not last_pos:
        print('NO')
        return
    
    if first_pos and last_pos:
        if min(first_pos) + min(last_pos) <= n - 3:
            print('YES')
            return
    
    if first_pos:
        for kk in first_pos:
            # print(first_pos, kk, get_pos(arr, kk+1, n-1))
            if get_pos(arr, kk+1, n-1):
                print('YES')
                return
            
    if last_pos:
        for kk in last_pos:
            if get_pos(arr[::-1], kk+1, n-1):
                print('YES')
                return
    
    print('NO')

        

for j in range(int(input())):
    # print(j+1)
    solve()