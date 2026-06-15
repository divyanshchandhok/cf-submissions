from collections import Counter


def solve():
    n = int(input())
    l = list(map(int, input().split()))
    l.sort()
    count = Counter(l)
    i = 0
    while i < n:
        s = l[i]
        if count[s] >= 4:
            return True
        if count[s] >= 2:
            j = i + count[s]

            while j < n:
                cur = l[j]
                if cur - l[j-1] != 1:
                    break

                if count[cur] >= 2:
                    return True
                elif count[cur] == 1:
                    j += 1
        i += count[s]

    return False

    # if n < 4:
    #     return False
    
    # p = False
    # last = 0
    # for i in range(1,n):
    #     elem = l[i]

    #     if p:
    #         if elem == last:
    #             if last == 
    #     else:
    #         if elem == l[i-1]:
    #             p = True
    #             f = elem
    #             last = elem




for _ in range(int(input())):
    if solve():
        print('Yes')
    else:
        print('No')