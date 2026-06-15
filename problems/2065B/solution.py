def solve():
    s = input()

    for i in range(1, len(s)):
        if s[i] == s[i-1]:
            return 1
    
    return len(s)

for _ in range(int(input())):
    print(solve())