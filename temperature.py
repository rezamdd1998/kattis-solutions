c,d = map(int,input().split())
if d == 1 :
    if c == 0 :
        print("ALL GOOD")
    else:
        print("IMPOSSIBLE")
elif (c/(1-d)) - int((c/(1-d))) == 0 :
    print(int((c/(1-d))))
else:
    print("%.6f" % (c/(1-d)))