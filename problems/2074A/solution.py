t = int(input())

for _ in range(t):
    arr = list(map(int, input().split()))

    if len(set(arr)) == 1:
        print("Yes")
    else:
        print("No")