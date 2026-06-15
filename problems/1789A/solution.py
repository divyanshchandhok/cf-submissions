import math

def solve():
    n = int (input())

    arr = list(map(int, input().split()))

    for i in range(n):
        for j in range(n):
            if i != j:
                x = math.gcd(arr[i], arr[j])

                if x == 1 or x == 2:
                    return 'Yes'
    
    return 'No'

for _ in range(int(input())):
    print(solve())