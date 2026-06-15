for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    m = 10 ** 12
    cnt = 1
    a.append(-1)
    for i in range(1, n+1):
        e = a[i]
        ee = a[i-1]

        if e != ee:
            m = min(m, ee*(n-cnt))
            cnt = 1
        else:
            cnt += 1
    
    print(m)