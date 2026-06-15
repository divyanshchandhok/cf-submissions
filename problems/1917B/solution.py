import sys

input = sys.stdin.read

data = input().split()

t = int(data[0])
n = 2
outputs = []
for i in range(t):
    uniques = []
    l = 0
    result = 0
    s = list(data[n])
    for j in range(len(s)):
        if s[j] not in uniques:
            uniques.append(s[j])
            l += 1
        
        result += l
    n += 2
    outputs.append(result)

print('\n'.join(map(str,outputs)))