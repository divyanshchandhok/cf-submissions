import math

for _ in range(int(input())):
    n = int(input())

    arr = list(map(int, input().split()))

    one_count = arr.count(1)
    minus_count = arr.count(-1)
    offset = one_count - minus_count


    if offset >= 0:
        if minus_count % 2 == 0:
            print(0)
        else:
            print(1)

    else:
        req = math.ceil(abs(offset) / 2)

        minus_count -= req

        if minus_count % 2 == 0:
            print(req)
        else:
            print(req + 1)

    #     req_ops = math.ceil(abs(offset) / 2)
    #     if minus_count_even:

    #         if req_ops % 2 == 0:
    #             print(req_ops)
    #         else:
    #             print(req_ops + 1)
        
    #     else:

    #         if req_ops % 2 == 0:
    #             print(req_ops + 1)
    #         else:
    #             print(req_ops)

    