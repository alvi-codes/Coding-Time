registration=input("Enter the registration number of the car :- ")

if registration[0].isupper()==True and registration[1].isupper()==True and registration[2].isupper()==True and  registration[3].isnumeric()==True and registration[4].isnumeric()==True and registration[5:].isupper()==True and len(registration)>=6 and len(registration)<=9 :
    print("TRUE")
else:
    print("FALSE")
