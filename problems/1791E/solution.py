for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))

    aa = [abs(i) for i in a]

    neg = 0

    for i in a:
        if i < 0:
            neg += 1
    
    if neg % 2 == 0:
        print(sum(aa))
    else:
        print(sum(aa) - 2*min(aa))