import math

def divisorGenerator(n):
    large_divisors = []
    for i in range(1, int(math.sqrt(n) + 1)):
        if n % i == 0:
            yield i
            if i*i != n:
                large_divisors.append(n / i)
    for divisor in reversed(large_divisors):
        yield int(divisor)


def solve():
    n = int(input())
    a = list(map(int, input().split()))
    evens = [i for index, i in enumerate(a) if ((index % 2) == 0)]
    odds = [i for index, i in enumerate(a) if ((index % 2) != 0)]
    # evenp = math.prod(evens)
    # oddp = math.prod(odds)
    # evenm = max(evens)
    # oddm = max(odds)
    g1 = math.gcd(*evens)
    g2 = math.gcd(*odds)

    # for i in g1:
    #     if oddp % i != 0 or i > oddm:
    #         print(i)
    #         return
    
    # for i in g2:
    #     if evenp % i != 0 or i > evenm:
    #         print(i)
    #         return
    
    if all(i % g1 for i in odds):
        print(g1)
    elif all(i % g2 for i in evens):
        print(g2)
    else:
        print(0)

for _ in range(int(input())):
    solve()