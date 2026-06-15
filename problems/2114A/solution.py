import math

for _ in range(int(input())):
    s = int(input())

    sqr = math.sqrt(s)

    if sqr == int(sqr):
        print(0, int(sqr))
    else:
        print(-1)