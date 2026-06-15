testcases = int(input())
outputs = []

for i in range(testcases):
    n = int(input().split(' ')[1])
    arr = [int(i) for i in input().split(' ')]
    
    if n in arr:
        outputs.append('yes')
    else:
        outputs.append('no')


for i in outputs:
    print(i)
