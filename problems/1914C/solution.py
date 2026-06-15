import sys

input = sys.stdin.read

data = input().split()

t = int(data[0])
index = 1
for _ in range(t):
    exp = []
    l = int(data[index])
    k = int(data[index+1])

    a = list(map(int, data[index+2:index+2+l]))
    b = list(map(int, data[index+2+l:index+2+2*l]))
    index += 2 + 2*l

    suf_a = [0]*l
    suf_a[0] = a[0]
    for i in range(1, l):
        suf_a[i] += suf_a[i-1] + a[i]

    max_b = 0
    max_exp = 0
    for m in range(1, min(k,l)+1):
        if b[m-1] > max_b:
            max_b = b[m-1]

        points = suf_a[m-1] + (k-m)*max_b
        
        if points > max_exp:
            max_exp = points
    print(max_exp)
