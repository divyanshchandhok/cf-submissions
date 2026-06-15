for _ in range(int(input())):
    n, k = map(int, input().split())

    l = list(map(int, input().split()))
    l.sort()

    if n % 2 == 0:
        s = k//2 + 1
        print(l[n//2 + s - 1] - l[n//2 - s] + 1)
        # print(n//2 - s, n//2 + s - 1)
    else:
        if k == 0:
            print(1)
        else:
            s = ((k+1)//2)*2 + 1
            # print(s)
            # print(n//2 - s//2)
            # print(n//2 + s//2)
            print(l[n//2 + s//2] - l[n//2 - s//2] + 1)