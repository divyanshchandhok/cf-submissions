def solve():
    n = int(input())

    arr = input().split()

    s = '01032025'

    for i in range(len(arr)):
        if len(s) == 0:
            return i
        
        else:
            if arr[i] in s:
                s = s.replace(arr[i], '', 1)

    if len(s) == 0:
        return n

    return 0

for _ in range(int(input())):
    print(solve())