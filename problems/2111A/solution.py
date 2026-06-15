import math

for _ in range(int(input())):
    n = int(input())

    print(2*math.ceil(math.log2(n+1)) + 1)