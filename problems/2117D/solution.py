def solve():
    n = int(input())
    a = list(map(int, input().split()))


    asc = all(a[i] <= a[i+1] for i in range(n-1))
    dsc = all(a[i] >= a[i+1] for i in range(n-1))

    if asc and dsc:
        if a[0] % (n+1) == 0:
            return "YES"
        else:
            return "NO"
    if (not asc) and (not dsc):
        return "NO"
    if dsc:
        a.sort()
    f = a[0]
    s = a[1]
    flag = 0
    c = 0
    delta = 2 * f - s
    step = n + 1

    if delta % step == 0:
        c = delta // step
        if c >= 0 and f - c * step >= 0 and s - c * step >= 0:
            flag = 1
            f -= c * (n+1)
    if flag:
        for i, e in enumerate(a):
            if e - c*(n+1) == f * (i+1):
                if i == n-1:
                    return "YES"
            else:
                return "NO"
    else:
        return "NO"
    # m = min(a)

    # q = m // (n+1)
    # # print(f'q = {q}')
    # f = a[0] - q * (n+1)
    # l = a[-1]- q * (n+1)
    # for i, e in enumerate(a):
    #     print(e - q * (n+1), (i+1)*f)
    #     if e - q * (n+1) == ((i+1)*f):
    #         if i == n-1:
    #             return "YES"
    #     else:
    #         break
    # a.reverse()
    # for i, e in enumerate(a):
    #     if e - q * (n+1) == ((i+1)*l):
    #         if i == n-1:
    #             return "YES"
    #     else:
    #         break
    
    # return "NO"
    

for _ in range(int(input())):
    print(solve())