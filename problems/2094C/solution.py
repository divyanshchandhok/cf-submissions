for _ in range(int(input())):
    n = int(input())
    grid = []
    for _ in range(n):
        row = list(map(int, input().split()))
        grid.append(row)
    
    ans = grid[0]
    
    if n > 1:
        for i in range(1,n):
            elem = grid[i][n-1]
            ans.append(elem)
    
    print(*([n*(2*n + 1) - sum(ans)] + ans))

    