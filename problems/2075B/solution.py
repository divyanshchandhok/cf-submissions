for _ in range(int(input())):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    largest_elements = sorted(arr)[::-1][:k+1]
    ans = 0
    if k != 1:
        ans = sum(largest_elements)
    else:
        if arr[0] >= arr[-1]:
            ans += arr[0]
            arr.pop(0)
            ans += max(arr)
        else:
            ans += arr[-1]
            arr.pop(-1)
            ans += max(arr)

    print(ans)
