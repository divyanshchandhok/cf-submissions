for _ in range(int(input())):
    a, b, c = map(int, input().split())

    if (c-b >= b-a) and ((c-2*b+a) % 3 == 0):
        print('YES')
    else:
        print('NO')