prime_flags = []
max_n = 0

def primes(n):
    flags = [True] * (n + 1)
    flags[0] = flags[1] = False
    for i in range(2, int(n**0.5) + 1):
        if flags[i]:
            for j in range(i * i, n + 1, i):
                flags[j] = False
    return flags

def solve():
    global prime_flags, max_n
    n = int(input())
    
    if n > max_n:
        prime_flags = primes(n)
        max_n = n
    
    ans = 0
    for i in range(2, n + 1):
        if prime_flags[i]:
            ans += n // i
    
    print(ans)

for _ in range(int(input())):
    solve()
