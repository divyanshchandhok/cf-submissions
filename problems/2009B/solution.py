for _ in range(int(input())):
    n = int(input())
    ans = []
    for _ in range(n):
        i = input()
        n = i.find('#')
        ans.append(n+1)
    
    print(*ans[::-1])