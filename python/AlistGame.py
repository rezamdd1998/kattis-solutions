num = int(input())
k = 0
i = 2
while i*i<=num :
    if num % i == 0 :
        num //= i
        k+=1
    else:
        i+=1
print(k+1)