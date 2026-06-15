def solve(i):

    n, x = map(int, input().split())
    # if i == 201:
    #     print(n*10000000000+x)
    xbits = bin(x)[2:]
    
    one_count = xbits.count('1')
    
    if x == 0:
        if n == 1:
            print(-1)
        else:
            if n % 2 == 0:
                print(n)
            else:
                print(n-1+4)
            
        return
    
    if x == 1:
        if n == 1:
            print(1)
        else:
            if n % 2 == 0:
                print(n-1+4)
            else:
                print(n)
        return
    
    if one_count >= n:
        print(x)
    else:
        if (n - one_count) % 2 == 0:
            print(x + (n - one_count))
        
        else:
            print(x + (n - one_count) + 1)

for i in range(int(input())):
    solve(i)
