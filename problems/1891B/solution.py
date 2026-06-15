for _ in range(int(input())):
    n, q = map(int, input().split())

    a = list(map(int, input().split()))

    x = list(map(int, input().split()))
    xm = [x[0]]

    for i in x[1:]:
        if i < xm[-1]:
            xm.append(i)
    
    ans = []

    for i in a:
        for j in xm:
            if i % (2 ** j) == 0:
                i += 2 ** (j - 1)
        
        ans.append(i)

    print(*ans)