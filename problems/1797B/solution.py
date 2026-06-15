def row_check(i):
    global n, mat

    count = 0
    for j in range(n):
        if mat[i][j] != mat[n - i - 1][n - j - 1]:
            count += 1
        
    if n % 2 != 0 and i == (n // 2):
        count /= 2
    
    return count

def solve():
    global n, k, mat
    n, k = map(int, input().split())
    ans = 0
    mat = []*n

    for _ in range(n):
        mat.append(list(map(int, input().split())))

    if n % 2 == 0:
        for i in range(n//2):
            ans += row_check(i)
    
    else:
        for i in range(n//2 + 1):
            ans += row_check(i)


    if ans > k:
        print("NO")
    elif ans == k:
        print("YES")
    else:
        if n % 2 != 0:
            print("YES")
        else:
            if (k - ans) % 2 == 0:
                print("YES")
            else:
                print("NO")

for t in range(int(input())):
    solve()