
def check_for_veichle_availability(search_item):
    array=["car","bus","train","plane","van"]
    found=False
    for i in range (len(array)):
        if array[i]==search_item:
            found=True
            position=i+1
    if found==True:       
        return "The veichle is available in position " +str(position)+' !'
    else:
        return "The veichle is not available !"



search_item=input("Enter the veichle you want to check for :-  ")
print(check_for_veichle_availability(search_item))

