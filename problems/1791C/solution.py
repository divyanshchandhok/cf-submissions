for _ in range(int(input())):
    n = int(input())

    s = list(input())
    to_deduct = 0
    for i in range(n//2):
        if s[i] != s[-i-1]:
            to_deduct += 1
        else:
            break

    print(len(s) - 2*to_deduct)

