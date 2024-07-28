a = input()
l = []
for i in range(len(a)):
    if a[i] != '<':
        l.append(a[i])
    else:
        if len(l) != 0 :
            l.pop()
for i in l :
    print(i,end='')
print()