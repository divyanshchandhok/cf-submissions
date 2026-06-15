for _ in range(int(input())):
    n, k = map(int, input().split())
    ops = 0

    if k >= n:
        ops = 1
    
    elif n % 2 == 0:
        ops += n // (k-1)

        if n % (k-1) != 0:
            ops += 1
    
    else:
        ops += 1
        n -= k
        ops += n // (k-1)

        if n % (k-1) != 0:
            ops += 1

    print(ops)
