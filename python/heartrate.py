t = int(input())
for test in range(t):
    b,p = map(float,input().split())
    m = 60*b/p
    print("%.4f %.4f %.4f" %(m-60/p,m,m+60/p))