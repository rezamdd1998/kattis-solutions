def f(a):
    return a[0]
days = set()
for i in range(int(input())):
    l = list(map(int,input().split()))
    for d in range(l[0],l[1]+1) :
        days.add(d)
print(len(days))