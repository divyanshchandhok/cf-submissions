import bisect

n = int(input())
arr = sorted(list(map(int, input().split())))

for _ in range(int(input())):
    m = int(input())

    print(bisect.bisect_right(arr, m))