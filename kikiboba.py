s = input()
k = s.count('k')
b = s.count('b')

if k > b:
    print('kiki')
elif b > k:
    print('boba')
elif b != 0:
    print('boki')
else:
    print('none')