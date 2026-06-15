for _ in range(int(input())):
    x, y = map(int, input().split())

    xandy = x&y
    
    if xandy == 0:
        print(0)
    elif x == y:
        print(-1)
    else:
        max_num = max(x, y)
        max_digits = 1 << (len(bin(max_num)[2:]) + 1)
        k = max_digits - max_num

        print(k)

