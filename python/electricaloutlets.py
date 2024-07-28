for _ in range(int(input())):
    l = list(map(int,input().split()))[1:]
    print(sum(l) - len(l) + 1)