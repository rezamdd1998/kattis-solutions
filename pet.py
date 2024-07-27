def key(l):
    return l[0]
mat = []
for i in range(5):
    row = list(map(int,input().split()))
    row = [sum(row),i+1]
    mat.append(row)
mat.sort(key=key,reverse=True)
print(mat[0][1],mat[0][0])