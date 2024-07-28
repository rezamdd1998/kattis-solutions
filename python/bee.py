import math
while True:
    l = list(map(float,input().split()))
    l[1] = int(l[1])
    if l[0] == 0 and l[1] == 0:
        break
    distances = []
    a = 0
    t = []
    for i in range(l[1]):
        distances.append(list(map(float,input().split())))
        t.append(-1)

    for i in range(l[1]):
        for j in range(i+1,l[1]):
            if math.sqrt(pow(distances[i][0] - distances[j][0],2) + pow(distances[i][1] - distances[j][1],2)) < l[0]:
                t[i] = t[j] = 1
    for i in t :
        if i == 1 :
            a+=1
    print("{0} sour, {1} sweet".format(a,l[1]-a))