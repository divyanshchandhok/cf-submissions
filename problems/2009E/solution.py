import math

for _ in range(int(input())):
    n, k = map(int, input().split())

    s = n*k + (n*(n-1) // 2)

    i = 1-2*k
    m = math.sqrt(4*k*k - 4*k + 4*s + 1)  
    i += m
    i /= 2
    i1 = math.floor(i)
    i2 = i1 + 1

    print(min(abs(2*i1*k + i1*i1 - i1 - s), abs(2*i2*k + i2*i2 - i2 - s)))
