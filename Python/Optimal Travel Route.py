#find most optimsed route based on fuel stations where the car needs to 
#stop, with M as the longest possible distance car can travel after one full
#refill and x being the array of all the positions of all the fuel stations 
#car starts first journey with full tank
 
def best_route(M, x):
    n = len(x)
    possible_distance = M 
    stops = []
    for i in range(n-1):
        next_drive = x[i+1] - x[i]
        if next_drive > possible_distance:
            stops.append(i)
            possible_distance = M
        possible_distance = possible_distance - next_drive
    return stops