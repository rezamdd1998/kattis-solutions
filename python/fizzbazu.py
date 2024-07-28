x,y,n = map(int,input().split(' '))
for i in range(1,n+1):
    m = ((("Fizz","Buzz")[i%y==0],str(i))[i % x!=0 and i%y !=0],"FizzBuzz")[i % x==0 and i%y ==0]
    print(m)