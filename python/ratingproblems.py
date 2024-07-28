n,k = map(int,input().split())
d = n-k
s = sum([int(input()) for i in range(k)])
print(f'{(s-3*d)/n} {(s+3*d)/n}')