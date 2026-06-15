from math import sqrt

for _ in range(int(input())):
    n, c = map(int, input().split())
    arr = map(int, input().split())
    sq_1 = 0
    sq_2 = 0

    for i in arr:
        sq_1 += i
        sq_2 += i ** 2

    constant = (c - sq_2)/4
    w = (sqrt((sq_1 ** 2) + 4*n*constant)-sq_1) / 2 / n
    print(round(w))