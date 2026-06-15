testcases = int(input())
output = []
for i in range(testcases): 
    x = int(input().split(' ')[1])
    stations = [int(j) for j in input().split(' ')]
    diff = []
    diff.append(stations[0])
    for j in range(1, len(stations)):
        diff.append(stations[j] - stations[j-1])

    diff.append((x - stations[-1])*2)
    output.append(max(diff))

for k in output:
    print(k)