t = int(input())

for i in range(t):
    input()
    arr_sum = sum(list(map(int, input().split(' '))))
    if arr_sum % 2 == 0:
        print('YES')
    else:
        print('NO')
