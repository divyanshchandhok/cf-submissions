for _ in range(int(input())):
    n, q = map(int, input().split())
    a = list(map(int, input().split()))

    pa = [0]

    for i in a:
        pa.append(i + pa[-1])

    for _ in range(q):
        l, r, k = map(int, input().split())
        s = pa[-1] - pa[r] + pa[l-1] + k*(r - l + 1)

        if s % 2 != 0:
            print("YES")
        else:
            print("NO")