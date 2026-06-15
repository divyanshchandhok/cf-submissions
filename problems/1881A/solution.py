testcases = int(input())
outputs = []
for i in range(testcases):
    i = 0
    len_x, len_s = [int(i) for i in input().split(' ')]
    x = input()
    s = input()

    limit = len_x + len_s

    while True:

        if s in x:
            outputs.append(i)
            break
        
        if len(x) > limit:
            outputs.append(-1)
            break

        x *= 2
        i += 1



for i in outputs:
    print(i)
