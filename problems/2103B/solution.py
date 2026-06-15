for _ in range(int(input())):
    n = int(input())
    s = input()
    
    count_01 = s.count('01')
    count_10 = s.count('10')

    if count_01 == 0 and count_10 == 0:
        print(n+int(s[0]))
    elif count_01 <= 1 and count_10 <= 1:
        print(n+1)
    else:
        ans = 0
        if s[0] == '1':
            ans += 1
        print(ans + n + count_01+count_10 - 2)
        
