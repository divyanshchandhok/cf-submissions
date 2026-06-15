testcases = int(input())
outputs = []

for i in range(testcases):
    num = int(input())
    if num % 3 == 0:
        outputs.append('Second')
    else:
        outputs.append('First')

for i in outputs:
    print(i)
