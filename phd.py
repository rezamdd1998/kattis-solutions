for i in range(int(input())):
    l = input()
    if l == "P=NP" :
        print("skipped")
        continue
    l = l.split('+')
    print(int(l[0]) + int(l[1]))