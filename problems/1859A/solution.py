t = int(input())

for i in range(t):
    input()
    arr = list(map(int, input().split(' ')))

    if len(set(arr)) == 1:
        print(-1)
    else:
        min_val = min(arr)
        min_count = arr.count(min_val)
        b = [min_val] * min_count
        c = [i for i in arr if i != min_val]

        print(f'{len(b)} {len(c)}')
        print(' '.join(map(str, b)))
        print(' '.join(map(str, c)))