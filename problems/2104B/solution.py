for _ in range(int(input())):
    n = int(input())
    a = list(map(int ,input().split()))

    maxl = []
    prefs = [0]
    maxs = 0
    ans = []
    for i in a:
        maxs = max(i, maxs)
        maxl.append(maxs)
    
    for i in range(n-1, -1, -1):
        prefs.append(a[i] + prefs[-1])
    

    for i in range(n):
        # print(prefs)
        # print(maxl)
        ans.append(prefs[i] + maxl[n-i-1])
    
    print(*ans)