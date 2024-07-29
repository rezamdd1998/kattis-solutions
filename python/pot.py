sum = 0
for i in range(int(input())):
    a = int(input())
    b = pow(a//10,a%10)
    sum = sum + b
print(sum)