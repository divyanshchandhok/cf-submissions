for _ in range(int(input())):
    n, k = map(int, input().split())
 
    s = input()
    s_rev = s[::-1]
 
    if s < s_rev:
        print('YES')
    else:
        if k == 0:
            print('NO')
        elif len(set(list(s))) == 1:
            print('NO')
        else:
            print('YES')
