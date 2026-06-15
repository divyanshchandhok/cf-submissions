t = int(input())

for _ in range(t):
    num = int(input())

    l = len(str(num))

    if l < 2:
        print(num)
    elif l < 3:
        print(9 + int(str(num)[0]))
    else:
        print(9 * (l-1) + int(str(num)[0]))