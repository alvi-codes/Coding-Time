stdnum=int(input("How many students are there in the class ? "))
for x in range(stdnum):
    sID=input("Please input the ID of the student : ")
    sEMAIL=input("Please input the email of the student : ")
    info=sID+"#"+sEMAIL
    with open("Names & Email.txt","a") as file:
        file.write(info+"\n")

    
