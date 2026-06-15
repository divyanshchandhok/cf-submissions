# from math import floor, log2

# def solve():
    

    # len_arr = [len(bin(i)) for i in arr]
    # for i in set(len_arr):
    #     count_of_elems = len_arr.count(i)
    #     if count_of_elems > 1:
    #         ans += count_of_elems * (count_of_elems - 1) // 2

    # return ans

for _ in range(int(input())):
    n = int(input())

    arr = list(map(int, input().split()))
    ans = 0
    len_arr = [0]*35
    for i in arr:
        num = len(bin(i))
        ans += len_arr[num]
        len_arr[num] += 1

    print(ans)