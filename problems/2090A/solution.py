for _ in range(int(input())):
    x, y, a = map(int, input().split())

    rem = (a+0.5) % (x+y)
    if rem <= x:
        print('NO')
    else:
        print('YES')