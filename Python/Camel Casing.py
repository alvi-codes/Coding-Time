

def Camelcase ():
    a= input("Enter the string: ")
    alist= list (a)
    alpha= ["Empty"]*10
    alpha[0]=alist[0]

    z=0
    for i in range (1, len(a)):
        if alist[i].isupper():
            z=z+1
            alpha[z]=alist[i]
        else:
            alpha[z]=alpha[z]+alist[i]

    for i in alpha:
        print(i)
Camelcase()
