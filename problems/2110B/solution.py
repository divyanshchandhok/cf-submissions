def solve():
    s = input()
    c1 = 0
    c2 = 0
    if ')(' not in s:
        return "NO"
    else:
        for i in range(len(s)):
            e = s[i]
            if e == '(':
                c1 += 1
            else:
                c2 += 1
            
            if c1 == c2 and i != (len(s) - 1):
                return "YES"
        
    return "NO"

for _ in range(int(input())):
    print(solve())