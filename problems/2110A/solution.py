def solve():
    n = int(input())
    a = list(map(int, input().split()))

    a.sort()
    a1 = a[0] % 2
    a2 = a[-1] % 2

    if a1 == a2:
        return 0
    
    for i in range(1, n//2 + 1):
        if (a[i] % 2 != a1) or (a[-1-i] % 2 != a2):
            return i
    
for _ in range(int(input())):
    print(solve())