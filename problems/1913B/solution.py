t = int(input())

for _ in range(t):
    arr = list(map(int, list(input())))
    l = len(arr)
    count0 = arr.count(0)
    count1 = l - count0

    if count0 == count1:
        print(0)
    else:
        for i, e in enumerate(arr):
            # print(i, e)
            if count0 != 0 and count1 != 0:
                if e == 1:
                    count0 -= 1
                else:
                    count1 -= 1
            else:
                print(len(arr) - i)
                break