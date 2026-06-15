# from collections import defaultdict

# def solve():
#     n = int(input())
#     a = list(map(int, input().split()))
#     b = list(map(int, input().split()))
#     ind = defaultdict(lambda:-1)
#     ind[a[-1]] = n - 1
#     ind[b[-1]] = n - 1
#     if a[-1] == b[-1]:
#         print(n)
#         return
#     for i in range(n-2, -1, -1):
#         ai = a[i]
#         bi = b[i]
#         # print(ai, bi, ind[ai], ind[bi])
#         if ai == bi or ai == a[i+1] or bi == b[i+1]:
#             print(i+1)
#             return
        
#         if ind[ai] == -1:
#             ind[ai] = i
#         else:
#             if ind[ai] - i > 1:
#                 print(i+1)
#                 return
#         if ind[bi] == -1:
#             ind[bi] = i
#         else:
#             if ind[bi] - i > 1:
#                 print(i+1)
#                 return
#     print(0)

# for _ in range(int(input())):
#     solve()

from collections import defaultdict

def solve():
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    ind = [-1] * (n+1)
    ind[a[-1]] = n - 1
    ind[b[-1]] = n - 1
    if a[-1] == b[-1]:
        print(n)
        return
    for i in range(n-2, -1, -1):
        ai = a[i]
        bi = b[i]
        # print(ai, bi, ind[ai], ind[bi])
        if ai == bi or ai == a[i+1] or bi == b[i+1]:
            print(i+1)
            return
        
        if ind[ai] == -1:
            ind[ai] = i
        else:
            if ind[ai] - i > 1:
                print(i+1)
                return
        if ind[bi] == -1:
            ind[bi] = i
        else:
            if ind[bi] - i > 1:
                print(i+1)
                return
    print(0)

for _ in range(int(input())):
    solve()