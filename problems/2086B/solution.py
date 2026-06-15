from math import ceil
import bisect
# def check(i):
#     global arr,x,arr_sum, pref_arr
#     sum_need = pref_arr[i % n] + arr_sum * (k - ceil((i+1) / n))
#     # print(i, sum_need)
#     if sum_need >= x:
#         return 0
    
#     return 1

# def solve():
#     global n,k,x,arr,x,arr_sum, pref_arr

#     n, k, x = map(int, input().split())

#     arr = list(map(int, input().split()))

#     arr_sum = sum(arr)

#     pref_arr = [0] * (n)

#     # if arr_sum * k < x:
#     #     return 0
    
#     for i in range(n-1, -1, -1):

#         if i == n-1:
#             pref_arr[i] = arr[i]
#         else:
#             pref_arr[i] = arr[i] + pref_arr[i+1]
    
#     l = 0
#     h = n*k - 1
#     ans = n*k

#     while l<=h:
#         mid = (l+h)//2
#         if check(mid) == 1:
#             ans = mid
#             h = mid - 1
#         else:
#             l = mid + 1

#     print(ans)

# for _ in range(int(input())):

#     solve()


for _ in range(int(input())):
    n, k, x = map(int, input().split())
    arr = list(map(int, input().split()))
    arr_sum = sum(arr)
    ans = 0
    sums_needed = ceil(x / arr_sum)

    if sums_needed <= k:
        ans += (k - sums_needed)*n

    left = x % arr_sum

    pref_arr = [0] * (n)

    for i in range(n-1, -1, -1):

        if i == n-1:
            pref_arr[i] = arr[i]
        else:
            pref_arr[i] = arr[i] + pref_arr[i+1]
    
    # print(pref_arr, left)
    # print(bisect.bisect_left(sorted(pref_arr), left))
    ans += bisect.bisect_right(sorted(pref_arr), left)


    print(ans)
    
