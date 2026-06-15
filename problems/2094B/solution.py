for _ in range(int(input())):
    n, m, l, r = map(int, input().split())
    
    k = n - m

    if k > r:
        print(l + k - r, 0)
    else:
        print(l, r - k)
    