date=int(input("Enter the date of the scores: "))
flag1=False
while flag1==False:
    text=""
    memID=input("Enter  the membership number: ")
    if len(memID)==4 and memID.isnumeric()==True:
        flag2=False
        while flag2==False:
            score=int(input("Enter the score: "))
            if score>=50 and score<=99:
                flag2=True
        text=memID+str(date)+str(score)
        file=open("ScoreDetails.txt","a")
        file.write("\n")
        file.write(text)            
    if memID=="":
        flag1=True
        
    
