def f(a) :
    return len(a)
t = int(input())
for test in range(t):
    n = int(input())
    l = []
    for i in range(n):
        l.append(input())
    res = "YES"
    l.sort(reverse=True)
    for i in range(n-1) :
        if l[i].find(l[i+1]) == 0:
            # print(l[i]+" "+l[j])
            res = "NO"
            break
    print(res)
