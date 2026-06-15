def solve():
    n = int(input())
    if n % 2 == 0:
        print(-1)
        return
    

    arr = [None] * n

    spaces = (n - 1) // 2
    
    
    for i in range(1, n+1):
        index_needed = ((i - 1) * (spaces + 1)) % n
        arr[index_needed] = i

    print(*arr)

for _ in range(int(input())):
    solve()