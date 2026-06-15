for _ in range(int(input())):
    n = int(input())
    ans = [1]
    for i in range(n, 1, -1):
        ans.append(i)
    print(*ans)