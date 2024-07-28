for i in range(int(input())):
    n = int(input().split()[1])
    print(f'{i+1} {(n*(n+1))//2+n}')