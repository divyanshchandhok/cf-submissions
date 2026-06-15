for _ in range(int(input())):
    n = int(input())

    if n % 2 == 0:
        print(-1)
    else:
        arr = [n]
        for i in range(1, n):
            arr.append(i)
        print(*arr)