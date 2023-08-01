
#include <iostream>
using namespace std;


int main(){   
    
    cout<<"Enter no. of assignments:"<<endl;
    int n;
    cin>>n;
    
    if(n>10){
        cout<<"No. of assignments must not be more than 10"<<endl;
    }
    else{
        double sum = 0;
        cout<<"Enter the scores:"<<endl;
        
        int curr_score = 0;
        for (int i = 0; i < n; i++){
            cin>>curr_score;
            sum+=curr_score;
        }
        
        double avg_score = sum/n;
        cout<<"The average score is "<<avg_score<<endl;
        
        if (avg_score<80){
            cout<<"Not eligible for projects"<<endl;
        }
        else{
            cout<<"Eligible for projects"<<endl;
        }
        
        
    }
    
    
    
    return 0;

}
