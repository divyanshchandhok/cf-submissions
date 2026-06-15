for _ in range(int(input())):
    s = list(map(int, list(input())))
    ans = ''
    s.sort(reverse=True)
    for i in range(10):
        m = 9-i
        while True:
            if m in s:
                ans += str(m)
                s.remove(m)
                break
            m += 1
    print(ans)


