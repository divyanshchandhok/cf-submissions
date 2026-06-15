def solve(i):
    global maxl
    return int((maxl - i) * (i + 1))

for _ in range(int(input())):
    s = input()
    l = list(map(len, [i for i in s.split('0') if '0' not in i]))
    maxl = max(max(l), l[0] + l[-1])

    if '0' not in s:
        print(len(s) ** 2)
    
    else:
        if maxl % 2 != 0:
            print(solve((maxl - 1) / 2))

        else:
            print(max(solve(maxl / 2), solve((maxl)/2 + 1), solve((maxl)/2 - 1)))