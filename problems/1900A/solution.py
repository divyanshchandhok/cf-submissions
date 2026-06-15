testcases = int(input())
outputs = []

def main():
    input()
    s = input()
    parts = s.split('#')
    for j in parts:
        if len(j) >= 3:
            return 2
    return s.count('.')
            
for i in range(testcases):
    outputs.append(main())

for i in outputs:
    print(i)