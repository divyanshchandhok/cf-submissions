def solve():
    n = int(input())
    s = input()
    a = []
    b = []
    for i in range(n):
        elem = s[i]
        if elem == 'A':
            a.append(i+1)
        else:
            b.append(i+1)

    if 1 in a and n in a:
        return 'Alice'
    if 1 not in a and n not in a:
        return 'Bob'
    
    if 1 not in a and n in a:
        if n-1 in a:
            return 'Alice'
        return 'Bob'
    
    if 1 in a and n not in a:
        if len(b) > 1:
            return 'Bob'
        else:
            return 'Alice'


for _ in range(int(input())):
    print(solve())