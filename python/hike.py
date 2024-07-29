n = int(input())
tep = list(map(int,input().split()))
d = 1
temp = max(tep[0],tep[2])
for i in range(1,n-2):
    if max(tep[i],tep[i+2]) < temp :
        d = i+1
        temp = max(tep[i],tep[i+2])
print(d,temp)