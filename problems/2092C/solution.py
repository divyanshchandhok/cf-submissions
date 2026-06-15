for _ in range(int(input())):
    n = int(input())

    arr = list(map(int, input().split()))
    evens = []
    odds = []

    for i in arr:
        if i % 2 == 0:
            evens.append(i)
        else:
            odds.append(i)

    le = len(evens)
    lo = len(odds)

    if le == 0 or lo == 0:
        print(max(arr))


    else:
        print(sum(odds) + sum(evens) - lo + 1)
        # odds.sort(reverse=True)

        # num_of_odds_used = min(lo - 1, le)
        
        # print(odds[0] + sum(evens) + sum(odds[1:num_of_odds_used+1]) - num_of_odds_used)
    