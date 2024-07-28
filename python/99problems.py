n = int(input())
rem = n%100
print((n//100)*100+99 if rem >= 49 else max((n//100-1),0)*100+99)