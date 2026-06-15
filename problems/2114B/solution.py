for _ in range(int(input())):
    n, k = map(int, input().split())
    s = input()
    z = s.count('0')
    o = s.count('1')

    z -= n // 2 - k
    o -= n // 2 - k

    if z >= 0 and o >= 0:
        if z % 2 == 0:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")