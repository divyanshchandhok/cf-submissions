# def solve():
#     s = input()
#     pair_index = [-1]*26
#     pair_length = [10 ** 9]*26
#     pair_numbers = [0]*26
#     uniques = len(set(list(s)))
#     if uniques == 1:
#         print("YES")
#         return
    
#     for i in range(len(s)):
#         if i != 0:
#             if s[i] == s[i-1]:
#                 print("NO")
#                 return
        
#         e = s[i]
        
#         ind = ord(e)-97
        
#         if pair_index[ind] == -1:
#             pair_index[ind] = i
#         else:
#             if pair_length[ind] == 10 ** 9:
#                 pair_length[ind] = i - pair_index[ind] - 1
#             else:
#                 pair_length[ind] += i - pair_index[ind] - 1
#             pair_numbers[ind] += 1
#             pair_index[ind] = i
        
#     # print(pair_index, pair_length)
    
#     for i in pair_length:
#     if min(pair_length) < uniques - 1:
#         print("NO")
#         return
#     print("YES")
# for _ in range(int(input())):
#     solve()

def solve():
    global t
    s = input()
    lc = -1
    setlen = len(set(list(s)))
    
    if setlen == 1:
        print("YES")
        return
    if setlen == len(s):
        print("YES")
        return
    
    for i in range(1, len(s)):
        if s[i] == s[0]:
            lc = i
            break
    
    if lc == -1:
        print("NO")
        return
    
    rs = s[:lc]
    if len(set(list(rs))) != len(rs):
        print("NO")
        return
    
    for i in range(len(s)):
        if s[i] != rs[i % len(rs)]:
            print("NO")
            return
        
    print("YES")
for t in range(int(input())):
    solve()