#include <iostream>

int main() 
{
    int i,n=0;   
    
    std::cout<<"Enter the number of Eggs"<<std::endl;
    std::cin>>n;
    
    int faulty=0, non_ideal=0, ideal=0;
    double curr_weight=0;
    
    std::cout<<"Enter the weight of the eggs(in grams)"<<std::endl;
    
    for (i=0;i<n;i++)
    {
        std::cin>>curr_weight;
        
        if(curr_weight>=50 && curr_weight<=70){
            ideal++;
        }
        else if(curr_weight<50){
            faulty++;
        }
        else{
            non_ideal++;
        }
    }
    
    if(faulty>4){
        std::cout<<"The box contains more than four faulty eggs"<<std::endl;
    }
    else{
        std::cout<<"Count of eggs with ideal weight ="<<ideal<<std::endl;
        std::cout<<"Count of eggs with non-ideal weight ="<<non_ideal<<std::endl;
        std::cout<<"Count of eggs with faulty weight ="<<faulty<<std::endl;
    }
    
    return 0;
}
