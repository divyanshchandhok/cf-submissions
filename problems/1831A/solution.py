for _ in range(int(input())):
    n = int(input())

    arr = list(map(int, input().split()))

    b = []

    for i in arr:
        b.append(n - i + 1)

    print(*b)