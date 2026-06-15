t = int(input())

for _ in range(t):
    n, k, x = map(int, input().split())
    arr = []
    if k == 1:
        print('NO')
        continue

    if x != 1:
        print('YES')
        print(n)
        arr = [1 for _ in range(n)]
        print(*arr)
        continue
    
    if k == 2 and n % 2 != 0:
        print('NO')
        continue


    print('YES')
    q = n//2
    print(q)
    if n%2 == 0:
        arr = [2 for _ in range(q)]

    else:
        arr = [3]
        arr.extend([2 for _ in range(q - 1)])

    print(*arr)