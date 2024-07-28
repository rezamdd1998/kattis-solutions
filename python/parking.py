for t in range(int(input())):
    n = input()
    p = sorted(map(int,input().split()))
    print(sum([abs(p[(i+1)%len(p)]-p[i]) for i in range(len(p))]))

