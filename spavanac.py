h,m = map(int,input().split(' '))
res = (str((h-1)%24)+" "+str((m+60-45)%60),str(h)+ " " +str(m-45))[m>=45]
print(res)