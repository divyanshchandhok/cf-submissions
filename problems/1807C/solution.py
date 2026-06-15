from collections import defaultdict


def solve():
    n = int(input())
    s = input()
    d = [-1 for i in range(26)]

    for i in range(n):
        e = s[i]
        if d[ord(e)-97] == -1:
            d[ord(e) - 97] = i % 2
        else:
            if i % 2 != d[ord(e) - 97]:
                print("NO")
                return

    print("YES") 


for _ in range(int(input())):
    solve()