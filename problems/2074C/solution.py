t = int(input())

for _ in range(t):
    x = int(input())

    if (x & (x-1) == 0) or (x & (x+1) == 0):
        print(-1)
    else:
        xb = bin(x)[2:]
        z = xb[::-1].index('0')
        sub = '1' + '0'*z
        y = int(xb, 2) - int(sub, 2)

        print(y)