tests = int(input())
for t in range(tests):
    n = int(input())
    l = []
    for i in range(n):
        l.append(input())
    print(len(set(l)))