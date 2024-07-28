crr = int(input())
f = input()
m = input()
cnt = 0
for i in range(len(f)):
    if(m[i]==f[i]):
        cnt = cnt+1
res = (cnt+len(f)-crr,crr+len(f)-cnt)[cnt > crr]
print(res)