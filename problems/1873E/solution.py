def check(mid):
    global n,k,a
    w = 0

    for i in a:
        if i < mid:
            w += mid - i
    
    # print(mid, w, k)
    if w <= k:
        return 0
    return 1

for _ in range(int(input())):
    n, k = map(int, input().split())

    a = list(map(int, input().split()))

    lo = min(a)
    hi = k // len(a) + 1 + max(a)
    # hi = 2000000001
    # print(lo, hi)
    ans = 0
    while lo <= hi:
        mid = (lo + hi) // 2

        if check(mid) == 1:
            hi = mid -1
        else:
            ans = mid
            lo = mid + 1

    print(ans)