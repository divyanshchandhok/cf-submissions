from collections import defaultdict

for _ in range(int(input())):
    n = int(input())
    st = 0
    # y0 = 0
    # y1 = 0
    z = defaultdict(int)
    o = defaultdict(int)
    zl = []
    ol = []
    points = []
    for _ in range(n):
        x, y = map(int, input().split())
        if y == 0:
            zl.append(x)
            z[x] += 1
        else:
            ol.append(x)
            o[x] += 1

    for i in zl:
        if o[i]:
            st += n-2
        if o[i+1] and z[i+2]:
            st += 1
        # if [x-1, 1] in points and [x+1, 1] in points:
        #     st += 1
        # if [x-1, 1] in points and [x-2, 0] in points:
        #     st += 1
    for i in ol:
        # if [x, 0] in points:
        #     st += n-2
        # if [x+1, 0] in points and [x+2, 1] in points:
        #     st += 1
        # if [x-1, 0] in points and [x+1, 0] in points:
        #     st += 1
        if z[i+1] and o[i+2]:
            st += 1


        # if y == 0:
    print(st)
