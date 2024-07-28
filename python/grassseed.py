c = float(input())
s =0
for i in range(int(input())):
    x,y = map(float,input().split(' '))
    s = s + x * y
print("%.8f"%(s*c))