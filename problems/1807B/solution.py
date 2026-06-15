for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    es = 0
    os = 0
    for i in a:
        if i % 2 == 0:
            es += i
        else:
            os += i
    
    if es > os:
        print("YES")
    else:
        print("NO")