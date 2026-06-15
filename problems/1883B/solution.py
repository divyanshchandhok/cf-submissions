from collections import defaultdict

def r():
    return list(map(int, input().split()))


t, = r()

def solve():
    n, k = r()
    s = input()
    s_dict = defaultdict(int)

    for i in list(s):
        s_dict[i] += 1

    paired_letters = 2*sum([i // 2 for i in s_dict.values()])

    l = n - k

    if l % 2 == 0:
        if paired_letters >= l:
            return 'YES'
    else:
        if paired_letters >= l - 1:
            return 'YES'
        
    return 'NO'

for _ in range(t):
    print(solve())
