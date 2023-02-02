'ex.1'
ar2d=[[1,3,5],[2,4,6]]
print(ar2d[0])
print(ar2d[1])
print(ar2d[1][1])

'eg.2'
a=[[1,2,3,4],[5,6],[789]]
for i in range (len(a)):
    for j in range(len(a[i])):
        print(a[i][j],end='')
    print()

'ex.3'
a=[]
print(a)
p=[1,2,3]
c=[4,5,6]
a.append(p)
a.append(c)
print(a)

'eg.4'
T=[[11,12,5,2],[15,6,10],[10,8,12,5],[12,15,8,6]]
for r in T:
    for c in T:
        print(c,end=" ")
    print()
    
