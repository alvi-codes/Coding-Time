array=["car","bus","metro","rail","plane","leguna","bhotbhoti"]
search=input("Enter the type of transport that you want to seach for :-  ")
flag=False
for i in range(len(array)):
    if search==array[i]:
        flag=True
        a=i
if flag==True:
    print(a)
if flag==False:
    print(-1)















