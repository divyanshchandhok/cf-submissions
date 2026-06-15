for _ in range(int(input())):
    n = int(input())

    a = input()
    b = input()

    s1 = 0
    s2 = 0

    for i in range(n):
        elem_a = 1 if a[i] == '0' else 0
        elem_b = 1 if b[i] == '0' else 0

        if i % 2 == 0:
            s1 += elem_a
            s2 += elem_b
        else:
            s1 += elem_b
            s2 += elem_a

    if n % 2 == 0:
        if s1 >= n//2 and s2 >= n//2:
            print("YES")
        else:
            print("NO")
    else:
        if s1 >= n//2 + 1 and s2 >= n//2:
            print("YES")
        else:
            print("NO")