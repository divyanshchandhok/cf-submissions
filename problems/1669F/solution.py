for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))

    fs = [a[0]]
    bs = [a[-1]]
    m = 0
    for i in range(1, n):
        fs.append(fs[-1] + a[i])
        bs.append(bs[-1] + a[n - i - 1])

    i = 0
    j = 0

    while True:
        e1 = fs[i]
        e2 = bs[j]

        if e1 == e2:
            i += 1
            j += 1
            if i + j <= n:
                m = max(m, i+j)
            else:
                break
        if e1 > e2:
            j += 1
        if e2 > e1:
            i += 1
        
        if i == n or j == n:
            break
    
    print(m)