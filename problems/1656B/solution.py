def solve():
    n, k = map(int, input().split())

    a = list(map(int, input().split()))
    a.sort()
    l = 0
    r = 1

    while r < n:
        d = a[r] - a[l]

        if d == k:
            return "YES"
        
        if d < k:
            r += 1
        else:
            l += 1
    
    return "NO"


for _ in range(int(input())):
    print(solve())