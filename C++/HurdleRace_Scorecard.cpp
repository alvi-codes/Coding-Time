#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the no. of hurdles:";
    int hurdles;
    cin>> hurdles;
    
    if(hurdles>0 && hurdles<=100){
        int arr[hurdles];
    
        for (int i = 0; i < hurdles; i++){
            cout<<"Enter the hurdle height "<<i+1<<":";
            cin>>arr[i];
        }
        
        cout<<"Latest hurdle race scores are:";
        
        for(int i = 0; i<5; i++){
            cout<<" "<<arr[hurdles-5+i];
        }
    }
    else{
        cout<<"Invalid no. of hurdles:"<<hurdles<<endl;
    }

    return 0;
}

