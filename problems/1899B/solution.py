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

def list_sum_calc(a, i):
    suma = []
    for j in range(len(a) // i):
        suma.append(sum(a[j*i: j*i + i]))
    # print(i, a, suma, len(a), len(suma))
    return max(suma) - min(suma)

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    div = list(divisorGenerator(n))
    ans = -100000000000
    for i in div:
        ans = max(ans, list_sum_calc(a, i))

    print(ans)
