##'Ex. 1'
##def sum(*numbers):
##    s=0
##    for n in numbers:
##        s+=n
##    return s
##print(sum(1,2,3,4,5,6,7,8,9))
##'Ex. 2'
##def avg(x,y):
##    a=float((x+y)/2)
##    return a
##print(avg(2,4))
##'Ex. 3'
##def nsqr(x,y):
##    a=x*x + 2*x*y + y*y
##    return a
##print("The square of the sum of the two numbers are ",nsqr(2,3))
##'Ex. 4'
##def calculator(a,b,function):
##    if function=="+":
##        result= a+b
##    elif function=="-":
##        result=a-b
##    elif function=="*":
##        result=a*b
##    return result
##num1=int(input("Enter the number 1 :- "))
##num2=int(input("Enter the number 2 :- "))
##func=input("Enter the function to perform:- ")
##print (calculator(num1,num2,func))
##'Ex. 5'
##import random
##def ran(x,y):
##    return random.randint(x,y)
##a=int(input("Enter the starting number:- "))
##b=int(input("Enter the ending number:- "))
##print(ran(a,b))
##'Ex. 6'
##def sumlist(nums):
##    'Return the sum of the numbers in the list nums'
##    sum=0
##    for num in nums:
##        sum=sum+num
##    return sum
##print(sumlist([1,2,3,4,5,6,7,8,9]))
'Ex. 7'
def ValidatePasswords(Pass):
    UC=0
    LC=0
    Num=0
    for i in range(len(Pass)):
        if Pass[i].isnumeric()==True:
            Num=Num+1
        if Pass[i].isupper()==True:
            UC=UC+1
        if Pass[i].islower()==True:
            LC=LC+1
    if Num>=3 and UC>=2 and LC>=2:
        return "VALIED"
    else:
        return "INVALIED"
    
password=input("Enter the password to test:- ")
print(ValidatePasswords(password))
            

    






























