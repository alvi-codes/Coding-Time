'TASK~ 1'

sname=[]
stotal=[]

for count in range(3):
    
    name=str(input("Enter the name of the student :"))
    sname.append(name)

    mark1=int(input("Enter the mark for judge 1 :"))
    while mark1>50 or mark1<0:
        print("Invalied mark for judge 1 ")
        mark1=int(input("Enter the mark for judge 1 : "))

    mark2=int(input("Enter the mark for judge 2 :"))
    while mark2>50 or mark2<0:
        print("Invalied mark for judge 2 ")
        mark2=int(input("Enter the mark for judge 2 : "))
        
    mark3=int(input("Enter the mark for judge 3 :"))
    while mark3>50 or mark3<0:
        print("Invalied mark for judge 3 ")
        mark3=int(input("Enter the mark for judge 3 : "))

    stotal.append(mark1+mark2+mark3)




##TASK~ 1'
####project_name=[]
####score_total=[]
####for i in range(5):
####    name=input("Enter the name of project : ")
####    project_name.append(name)
####    flag_1=False
####    flag_2=False
####    flag_3=False
####    while flag_1==False:
####        score_1=int(input("Enter the score by judge 1 :"))
####        if score_1>=0 and score_1<=40:
####            flag_1=True
####    while flag_2==False:
####        score_2=int(input("Enter the score by judge 2 :"))
####        if score_2>=0 and score_2<=40:
####            flag_2=True
####    while flag_3==False:
####        score_3=int(input("Enter the score by judge 3 :"))
####        if score_3>=0 and score_3<=40:
####            flag_3=True
####    total=int(score_1+score_2+score_3)
####    score_total.append(total)
##
##    
##'TASK~ 2'
####first=0
####first_score=0
####second=0
####second_score=0
####for y in range(5):
####    if score_total[y]>first_score:
####        first=y
####        first_score=score_total[y]
####for z in range(5):
####    if score_total[z]>second_score and score_total[z]<first_score:
####        second=z
####print("The FIRST place holder is project named:- ",project_name[first])
####print("The SECOND place holder is project named:- ",project_name[second])



 
    
