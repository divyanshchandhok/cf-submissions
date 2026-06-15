testcases = int(input())
outputs = []

for i in range(testcases):
    input()
    perm = [int(i) for i in input().split(' ')]

    if perm[0] == 1:
        outputs.append('yes')
    else:
        outputs.append('no')


for i in outputs:
    print(i)
