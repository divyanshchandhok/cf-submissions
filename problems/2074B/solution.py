t = int(input())

for _ in range(t):
    l = int(input())

    arr = list(map(int, input().split()))

    print(sum(arr) - l + 1)