for _ in range(int(input())):
    n, x = map(int, input().split())

    a = list(map(int, input().split()))
    first = 100
    last = -1
    for i,e in enumerate(a):
        if e == 1:
            first = min(i, first)
            last = max(i, last)
    
    if last-first+1 > x:
        print("NO")
    else:
        print("YES")