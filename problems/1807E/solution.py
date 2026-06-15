for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))

    pa = [0]

    for i in a:
        pa.append(i + pa[-1])

    l = 1
    r = n
    # print(pa)
    while True:
        # if l == r:
        #     print("! " + str(l))
        #     break

        k = (l+r) // 2

        tp = ['?', k-l+1] + [l+i for i in range(k-l+1)]

        print(*tp)
        
        ir = int(input())

        s = pa[k] - pa[l-1]
        # print(s)

        if ir == s:
            if r - l <= 1:
                print('! ' + str(l+1))
                break

            l = k + 1
        else:
            if r - l <= 1:
                print('! ' + str(l))
                break
            r = k
        
