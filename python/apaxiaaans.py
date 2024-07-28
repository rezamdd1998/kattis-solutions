s = input()
r =s[0]
print(r,end='')
for i in range(1,len(s)):
    if s[i] != r :
        print(s[i],end='')
    r = s[i]