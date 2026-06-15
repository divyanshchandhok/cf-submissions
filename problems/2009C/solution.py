import math

for _ in range(int(input())):
    x, y, k = map(int, input().split())
    xn = math.ceil(x/k)
    yn = math.ceil(y/k)
    if xn <= yn:
        print(2*yn)
    else:
        print(2*xn - 1)