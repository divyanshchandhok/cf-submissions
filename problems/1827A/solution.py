from bisect import bisect_right


mod = 1000000007
for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    a.sort()
    b.sort(reverse=True)
    ans = 1
    for i in range(n):
        ans *= n - bisect_right(a, b[i]) - i
        ans %= mod
    
    print(ans % mod)
    