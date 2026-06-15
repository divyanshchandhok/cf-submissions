def spl(k):
    res = []
    start = 0
    for i in range(len(k) - 1):
        if k[i] != k[i+1]:
            res.append(k[start:i+1])
            start = i + 1
        if i == len(k) - 2:
            res.append(k[start:len(k)])
    
    if len(k) == 1:
        res.append(k)
    # print(res)
    return res

def solve():
    p = input()
    s = input()
    pl = spl(p)
    sl = spl(s)

    pll = len(pl)
    sll = len(sl)

    if pll != sll:
        print('NO')
        return
    else:
        for i, j in zip(pl, sl):
            if i[0] != j[0]:
                print('NO')
                return

            if len(j) > 2*len(i) or len(j) < len(i):
                print('NO')
                return
    
    print('YES')

for _ in range(int(input())):
    solve()