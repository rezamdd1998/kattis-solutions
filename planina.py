n = int(input())
s = 2
for _ in range(n):
    s += s-1
print(s*s)