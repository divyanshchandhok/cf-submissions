import math


def get_max_seats(n, x):

    if (n+1) % (x+1) == 0:
        return ((n+1) // (x+1))*x
    
    else:

        return (n // (x + 1))*x + n % (x+1)


def solve():
    n, m, k = map(int, input().split())

    max_in_a_row = math.ceil(k / n)
    spaces = m - max_in_a_row

    lowest = m // (spaces + 1)
    for i in range(lowest, m+1):
        if max_in_a_row <= get_max_seats(m, i):
            return i
        

for _ in range(int(input())):
    print(solve())