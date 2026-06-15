import itertools

def solve():
    a, b = map(int, input().split())
    to_add = [[a, b], [a, -b], [-a, -b], [-a, b], [b, a], [b, -a], [-b, a], [-b, -a]]
    k_coords = list(map(int, input().split()))*8
    q_coords = list(map(int, input().split()))*8
    kpoints = []
    qpoints = []

    for i in to_add:
        kpoints.append(tuple([sum(x) for x in zip(i, k_coords)]))
        qpoints.append(tuple([sum(x) for x in zip(i, q_coords)]))

    points = set(kpoints).intersection(set(qpoints))

    print(len(points))    
    

for _ in range(int(input())):
    solve()