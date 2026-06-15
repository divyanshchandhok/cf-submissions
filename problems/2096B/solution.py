for _ in range(int(input())):
    n, k = map(int, input().split())

    l = list(map(int, input().split()))
    r = list(map(int, input().split()))
    maxp = 0
    minp = []
    for i in range(n):
        maxp += max(l[i], r[i])
        minp.append(min(l[i], r[i]))
    
    # if k == 1:
    #     print(maxp + 1)
    
    minp.sort(reverse=True)
    # print(maxp, minp, k)
    print(maxp + sum(minp[:k-1]) + 1)