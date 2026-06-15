def solve():
    n, m = map(int, input().split())

    if n*m == 1:
        input()
        print(-1)
        return
    
    for _ in range(n):
        row = map(int, input().split())
        new_row = []
        for i in row:
            if i == 1:
                new_row.append(n*m)
            else:
                new_row.append(i-1)
        print(*new_row)

for _ in range(int(input())):
    solve()