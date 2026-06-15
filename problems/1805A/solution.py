for _ in range(int(input())):
    n = int(input())

    arr = list(map(int, input().split()))

    a_xors = 0

    for a in arr:
        a_xors ^= a
    
    if n % 2 == 0:
        if a_xors == 0:
            print(0)
        else:
            print(-1)
    
    else:
        print(a_xors ^ 0)