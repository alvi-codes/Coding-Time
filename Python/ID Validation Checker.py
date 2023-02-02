valied=False
while valied==False:
    ID=input("Enter the user ID :- ")
    if len(ID)==5 and ID[0]>="A" and ID[0]<="Z" and ID[1]>="0" and ID[1]<="9" and ID[2]>="0" and ID[2]<="9" and ID[3]>="0" and ID[3]<="9" and ID[4]>="0" and ID[4]<="9":
        valied=True
name=""
name=input("Enter a user name :- ")
print(ID+" + "+name)




##def Getinfo():
##    ID=""
##    PreferredName=""
##    Valied=False
##    while not Valied:
##        ID=input("Please enter a valied ID :-  ")
##        if len(ID)==5 and ID[0]>="A"and ID[0]<="Z" and ID[1:].isnumeric():
##            valied=True
##    PreferredName=input("Please enter a username :- ")
##    return ID + "+" + PreferredName
##
##
