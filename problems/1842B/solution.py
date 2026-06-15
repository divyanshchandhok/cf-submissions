# t = int(input())
# r = lambda : list(reversed(list(map(int, input().split()))))


# def binlist(num):
#     return list(bin(num)[2:])


# def valid(x_bin, diff_bin):
#     max_len = max(len(x_bin), len(diff_bin))
#     x_bin_padded = ['0'] * (max_len - len(x_bin)) + x_bin
#     diff_bin_padded = ['0'] * (max_len - len(diff_bin)) + diff_bin
    
#     for i, j in zip(x_bin_padded, diff_bin_padded):
#         if i == '0' and j == '1':
#             return False
#     return True



# def solve():
#     n, x = list(map(int, input().split()))

#     if x == 0:
#         return 'Yes'
    
#     arr_1 = r()
#     arr_2 = r()
#     arr_3 = r()

#     k = 0
        
#     x_bin = binlist(x)
#     for _ in range(3*n):

#         if k == x:
#             return 'Yes'

#         if arr_1:
#             a = arr_1[-1]
#             a_bin = binlist(a)

#             if valid(x_bin, a_bin):
#                 arr_1.pop()
#                 k = k | a
#                 continue
#         if arr_2:
#             b = arr_2[-1]
#             b_bin = binlist(b)

#             if valid(x_bin, b_bin):
#                 arr_2.pop()
#                 k = k | b
#                 continue

#         if arr_3:
#             c = arr_3[-1]
#             c_bin = binlist(c)

#             if valid(x_bin, c_bin):
#                 arr_3.pop()
#                 k = k | c
#                 continue
        
#         return 'No'
    
#     return 'No'
      

# for i in range(t):
#     print(solve())

t = int(input())

r = lambda : map(int, input().split())

def solve():
    n, x = r()
    k = 0
    abc = [r(), r(), r()]

    for j in abc:
        for i in j:
            if k == x:
                return 'Yes'
            if ~x & i != 0:
                break
            k = k | i
    
    if k == x:
        return 'Yes'
    return 'No'

for _ in range(t):
    print(solve())