mystring=input("Eneter the string :- ")
stringtotal=0
for i in range(len(mystring)):
    stringtotal=stringtotal+ord(mystring[i])
print(mystring,stringtotal)
