for _ in range(int(input())):
    n, m = map(int, input().split())

    a = sorted(list(map(int, input().split())))
    mi = 0
    ma = m-1
    for i in range(1, n+1):
        if i % 2 != 0:
            ans = [a[mi], a[ma]]*3
        else:
            ans = [a[ma], a[mi]]*3
            mi += 1
            ma -= 1

        print(*ans)