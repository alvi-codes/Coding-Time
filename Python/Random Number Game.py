flag=False
while flag==False:
    num=int(input("Enter the number of your guess between 1 & 9 :- "))
    import random
    ran=random.randint(1,9)
    if num==ran:
        print("Your guess is correct :- ",num)
        flag=True
    elif num<ran:
        print("Enter a larger number")
    elif num>ran:
        print("Enter a smaller number")
