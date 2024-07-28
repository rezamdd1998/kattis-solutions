n = int(input())
socks = dict()
result = False
for _ in range(n):
    Type, side, num = input().split()
    num = int(num)

    if Type not in socks:
        if side == 'any' and num > 1:
            num = 1
            socks[Type] = (num,side,True)
        else:
            if side == 'any':
                num = 1
            socks[Type] = (num, side, False)
    else:
        max_l, side_t, res = socks[Type]
        max_l = max(max_l,num)
        if side == 'any':
            max_l = 1
        if side_t != side or 'any' in [side,side_t]:
            res = True
        socks[Type] = (max_l, side_t, res)

# print(socks)
for key,values in socks.items():
    result |= values[-1]
if not result:
    print('impossible')
else:
    cnt = 0
    for key, values in socks.items():
        cnt += values[0]
    print(cnt+1)