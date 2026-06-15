t = int(input())

for _ in range(t):
    n, x = map(int, input().split(' '))

    arr = list(map(int, input().split(' ')))

    avg_arr = sum(arr) / n

    if avg_arr == x:
        print('YES')
    else:
        print('NO')