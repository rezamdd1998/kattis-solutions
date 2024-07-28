n = int(input())
for i in range(n):
    x = int(input())
    sum = 1
    for k in range(1,x+1):
        sum = sum * k
    print(str(sum)[int(len(str(sum)))-1])