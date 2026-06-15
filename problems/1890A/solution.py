import math

testcases = int(input())
outputs = []

for i in range(testcases):
    length = int(input())
    arr = [int(i) for i in input().split(' ')]

    uniques = list(set(arr))

    if len(uniques) == 1:
        outputs.append('yes')
    elif len(uniques) == 2 and (arr.count(uniques[0]) == math.floor(length/2) or arr.count(uniques[1]) == math.floor(length/2)):
        outputs.append('yes')
    else:
        outputs.append('no')
for i in outputs:
    print(i)
