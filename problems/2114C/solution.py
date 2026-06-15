for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    ans = 1
    l = 0
    r = 1

    while r < n:
        if a[r] > a[l] + 1:
            ans += 1
            l = r
        
        r += 1
    print(ans)
