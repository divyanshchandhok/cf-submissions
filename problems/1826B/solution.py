import math

for t in range(int(input())):
    n = int(input())

    a = list(map(int, input().split()))

    # if t == 59:
    #     print(*a)
    l1 = []
    # l2 = []
    # m = -10000000000
    # pairs = list(set([tuple(sorted([a[i], a[n-i-1]])) for i in range(math.ceil(n/2))]))
    pairs = [abs(a[i] - a[n - i - 1]) for i in range(math.ceil(n/2))]

    # for i in pairs:
    #     e1, e2 = i
    #     if e1 != e2:
    #         l1.append(e2 - e1)
            # l2.append(math.gcd(e1, e2))
            # m = max(m, e1)
    # print(l1, l2)
    
    # if len(l1) == 0:
    #     print(0)

    # else:
    #     g1 = math.gcd(*l1)
    #     print(g1)
        # if g1 > m:
        #     print(g1)
        # else:
        #     print(math.gcd(*l2))

    g1 = math.gcd(*pairs)
    print(g1)

