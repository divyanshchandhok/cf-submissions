t = int(input())

for _ in range(t):
    input()
    arr = list(map(int, input().split(' ')))

    min_diff = arr[1] - arr[0]

    for i in range(1, len(arr) - 1):
        diff = arr[i+1] - arr[i]
        min_diff = min(diff, min_diff)
    
    if min_diff < 0:
        print(0)
    elif min_diff % 2 == 0:
        print(int(min_diff/2 + 1))
    else:
        print(int(min_diff//2 + 1))