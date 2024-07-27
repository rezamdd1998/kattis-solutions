a = int(input())
b = int(input())
total = a * b
s = 0
for _ in range(b):
    s += input().count('.')
print(s / total)