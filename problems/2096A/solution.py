for _ in range(int(input())):
    n = int(input())
    s = input()
    # sl = [1 if i == '>' else 0 for i in s]
    ans = [0]*n
    x = 0
    y = 0
    for e in range(n-2, -1, -1):
        i = s[e]
        if i == '>':
            ans[e+1] = n - x
            x += 1
        else:
            ans[e+1] = 1 + y
            y += 1

    ans[0] = y+1

    print(*ans)