t = int(input())

for _ in range(t):
    input()
    arr = list(map(int, input().split(' ')))

    if arr[0] == arr[-1]:
        print("NO")
    else:
        print("YES")
        new_arr = [arr[-1]] + [arr[0]] + arr[1:-1]
        print(*new_arr)