testcases = int(input())
outputs = []

for i in range(testcases):
    sum = 0
    input()
    arr = [int(i) for i in input().split(' ')]
    for j in arr:
        sum -= j
    outputs.append(sum)


for i in outputs:
    print(i)
