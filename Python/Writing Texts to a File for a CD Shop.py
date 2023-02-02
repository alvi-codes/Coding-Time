flag=False
while flag==False:
    CDTitle=input("Enter the CD title:- ")
    if CDTitle=="##":
        flag=True
    if flag==False:
        CDArtist=input("Enter the CD artist:- ")
        CDLocation=input("Enter the CD location:- ")
        text=input("Enter the text line:- ")
        if CDLocation=="file31":
            file31=open("CDshop31.txt","a")
            file31.write(text)
            file31.write("\n")
            file31.close()
        if CDLocation=="file32":
            file32=open("CDshop32.txt","a")
            file32.write(text)
            file32.write("\n")
            file32.close()




















































