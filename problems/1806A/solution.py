for _ in range(int(input())):
    a, b, c, d = map(int, input().split())

    x = c - a
    y = d - b

    if y < 0 or (x > 0 and (x > y)):
        print(-1)

    else:
        print(2*y -x)