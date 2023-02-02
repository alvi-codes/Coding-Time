upper=0
lower=0
numeric=0
others=0
Pass=input("Enter the password: ")
for i in range(len(Pass)):
    if Pass[i].isupper()==True:
        upper=upper+1
    if Pass[i].islower()==True:
        lower=lower+1
    if Pass[i].isnumeric()==True:
        numeric=numeric+1
    if Pass[i].isnumeric()==False and Pass[i].isalpha()==False:
        others=others+1
if upper>=2 and lower>=2 and numeric>=3 and others==0:
    print("TRUE")
else:
    print("FALSE")


           
