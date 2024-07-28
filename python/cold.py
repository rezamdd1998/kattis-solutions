cnt = 0
n = int(input())
x = map(int,input().split())
for i in x:
    if i < 0 :
        cnt = cnt + 1
print(str(cnt))