from collections import Counter
l = [item[0] for item in input().split()]
print(max(Counter(l).values()))