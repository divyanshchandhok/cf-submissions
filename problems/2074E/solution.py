import random

t = int(input())

def solve():
    n = int(input())
    ask = [1, 2, 3]
    cor = False
    for _ in range(75):
        print('?', *ask)
        res = int(input())

        if res == -1:
            break
        if res == 0:
            cor = True
        
        if cor:
            print('!', *ask)
            return

        else:
            ask = [random.sample(ask, 2)]
            ask.append(res)

for __ in range(t):
    solve()