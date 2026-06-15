# def solve():
#     n, k = map(int, input().split())

#     a = list(map(int, input().split()))
#     b = list(map(int, input().split()))
#     x = []
#     y = []
    # if set(b) == {-1}:
    #     pass
    # else:
    #     for i in range(n):
    #         if b[i] != -1:
    #             sumn = a[i] + b[i]
    #             break
        
    #     if k < sumn:
    #         for i in a:
    #             if i < sumn - k :
    #                 print(0)
    #                 return
        
    #     print(1)
    
    # if set(b) == {-1}:
    #     print(k + min(a) - max(a) + 1)

    # else:
        # for i in range(n):
        #     if b[i] != -1:
        #         sumf = a[i] + b[i]   
        #         break
        
        # for i in range(n):
        #     elema = a[i]
        #     elemb = b[i]

        #     if elemb == -1:
        #         if elema < sumf - k or elema > sumf:
        #             print(0)
        #             return
        #     else:
        #         if elema + elemb != sumf:
        #             print(0)
        #             return

        # print(1)

#     for i in range(n):
#         elema = a[i]
#         elemb = b[i]
#         if elemb == -1:
#             if elema > x[0] or elema < x[0] - k:
#                 print(0)
#                 return
#         else:
#             s = elema+elemb
#             if s not in x:
#                 x.append(s)
#             if len(x) > 1:
#                 print(0)
#                 return
    
#     if len(y) == n:
#         print(k + min(a) - max(a) + 1)
#         return
#     if len(y) == 0:
#         print(1)
#         return
            
#     print(1)
        

# for t in range(int(input())):
#     # print(str(t+1) + ':')
#     solve()

# -----------------------------------------------------

def solve():
    n, k = map(int, input().split())

    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    
    # if set(b) == {-1}:
    #     pass
    # else:
    #     for i in range(n):
    #         if b[i] != -1:
    #             sumn = a[i] + b[i]
    #             break
        
    #     if k < sumn:
    #         for i in a:
    #             if i < sumn - k :
    #                 print(0)
    #                 return
        
    #     print(1)
    
    if max(b) == -1:
        print(k + min(a) - max(a) + 1)

    else:
        for i in range(n):
            if b[i] != -1:
                sumf = a[i] + b[i]   
                break
        
        for i in range(n):
            elema = a[i]
            elemb = b[i]

            if elemb == -1:
                if elema < sumf - k or elema > sumf:
                    print(0)
                    return
            else:
                if elema + elemb != sumf:
                    print(0)
                    return

        print(1)
            
        

for t in range(int(input())):
    # print(str(t+1) + ':')
    solve()