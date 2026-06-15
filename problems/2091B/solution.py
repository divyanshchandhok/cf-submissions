def solve():
    n, x = map(int, input().split())

    arr = list(map(int, input().split()))

    arr.sort(reverse=True)
    i = 0
    j = 0
    final = 0
    while True:
        ans = (j - i + 1) * arr[j]
        if ans >= x:
            final += 1
            i = j + 1

        
        if j == n - 1:
            return final

        j += 1

for _ in range(int(input())):
    print(solve())
