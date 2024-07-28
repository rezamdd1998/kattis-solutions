n = list(input())
vol = 'eauoi'
i=0
while i < len(n):
    if n[i] in vol :
        n.pop(i+1)
        n.pop(i+1)
    i+=1
for i in range(len(n)):
    print(n[i],end='')