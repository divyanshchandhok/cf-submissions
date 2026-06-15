import math
for _ in range(int(input())):
    n = int(input())
    e = n*n / 4
    ee = n*n // 4

    if e == ee:
        print(int(e+1))
    else:
        print(math.ceil(e))
