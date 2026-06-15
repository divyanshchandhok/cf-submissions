def solve():
    n, m = map(int, input().split())

    rows = []
    # row_valid = {}
    # column_valid = {}

    for r in range(n):
        input_l = input()

        # if '01' not in input_l:
        #     row_valid[r] = 1
        # else:
        #     row_valid[r] = 0
        
        rl = list(map(int, list(input_l)))
        rows.append(rl)

    # for c in range(m):
    #     cl = [i[c] for i in rows]
    #     if '01' not in ''.join([str(i) for i in cl]):
    #         column_valid[c] = 1
    #     else:
    #         column_valid[c] = 0

    for i in range(n):
        for j in range(m):
            element = rows[i][j]
            if element == 1:
                row_valid = all(rows[i][k] == 1 for k in range(j))
                col_valid = all(rows[k][j] == 1 for k in range(i))

                if not row_valid and not col_valid:
                    return 'NO'
                
    return 'YES'


for _ in range(int(input())):
    print(solve())

