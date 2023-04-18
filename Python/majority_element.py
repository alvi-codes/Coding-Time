def majority(x):
    n = len(x)
    if n==0:
        return -1
    if n==1:
        return 0
    mid = n//2 # integer divide
    L = majority(x[:mid])
    R = majority(x[mid:])
    if L>=0:
        if sum(y==x[L] for y in x)>n/2:
            return L
    if R>=0:
        if sum(y==x[R+mid] for y in x)>n/2:
            return R+mid
    return -1

x1 = [1,2,3,4,3,2,2,2,2,2,2,3,2,1,2,3]
x2 = [8,9,10,10]
maj1 = majority(x1)
maj2 = majority(x2)
print(maj1, maj2, x1[maj1])
if maj1==-1:
    print("Wrong! (1)")
elif maj1>=len(x1):
    print("Wrong! (2)")
elif x1[maj1]!=2:
    print("Wrong! (3)")
elif maj2!=-1:
    print("Wrong! (4)")
else:
    print("You got it!")