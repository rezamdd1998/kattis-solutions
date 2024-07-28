n = input()
while True :
    if int(n) % sum([int(i)-int('0') for i in list(n)]) == 0 :
        print(n)
        break
    n = str(int(n)+1)
    