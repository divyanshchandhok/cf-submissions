import sys

input = sys.stdin.read
data = input().split()

t = int(data[0])
index = 1

results = []
for _ in range(t):
    n = int(data[index])
    b = list(map(int, data[index+1:index+1+n]))
    index += n + 1

    a = [b[0]]
    for i in range(1, n):
        if b[i] < b[i - 1]:  
            a.append(b[i])
        a.append(b[i])

    results.append(f"{len(a)}")
    results.append(" ".join(map(str, a)))

print("\n".join(results) + "\n")
