sum = 0
for i in range(int(input())):
    a,b = map(float,input().split())
    sum = sum + a * b
print("%.3f"%sum)