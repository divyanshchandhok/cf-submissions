for _ in range(int(input())):
    l = int(input())
    s = input()
    n = s.count('1')
    print(n*l - 2*n + l)