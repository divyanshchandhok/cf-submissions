t = int(input())

for _ in range(t):

    input()
    l = 0
    arr = list(map(int, input().split(' ')))
    prev_par = arr[0] % 2
    for i in arr[1:]:
        cur_par = i % 2

        if cur_par == prev_par:
            l += 1

        prev_par = cur_par
    print(l)

