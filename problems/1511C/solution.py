from collections import defaultdict

n, q = map(int, input().split())

na = list(map(int, input().split()))
qa = list(map(int, input().split()))
qaa = []
ans = []
uniques = []
colours = defaultdict(list)

for i,e in enumerate(na):
    if e not in uniques:
        uniques.append(e)
        colours[e] = [i+1, 0]

for i in qa:
    a = colours[i][0]
    for j in qaa[colours[i][1]:]:
        if j > a:
            a += 1
    colours[i][0] = 1
    qaa.append(a)
    colours[i][1] = len(qaa)
    ans.append(a)

print(*ans)