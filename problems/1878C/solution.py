for _ in range(int(input())):
    n, k, x = map(int, input().split())

    max_sum = k * (2*n - k + 1) / 2
    min_sum = k * (k + 1) / 2

    if x >= min_sum and x <= max_sum:
        print('YES')
    else:
        print('NO')