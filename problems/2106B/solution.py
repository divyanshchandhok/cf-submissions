for _ in range(int(input())):
    n, x = map(int, input().split())

    ans = [i for i in range(n) if i != x]
    if len(ans) == n-1:
        ans.append(x)
    print(*ans)