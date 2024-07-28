s ="PER"
text = input()
cnt=0
for i in range(len(text)):
    if s[i%3] != text[i] :
        cnt+=1
print(cnt)
