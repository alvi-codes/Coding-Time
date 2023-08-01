

#include <iostream>
using namespace std;


int main(){   
    
    cout<<"Enter the no. of income sources:";
    int n;
    cin>>n;
    
    int incomes[n];
    int taxables=0;
    cout<<"Enter the income form various sources:"<<endl;
    for(int i=0; i<n; i++){
        cin>>incomes[i];
        if (incomes[i]>9950){
            taxables++;
        }
    }
    
    if (taxables==0){
        cout<<"Not liable to pay income tax"<<endl;
    }
    else{
        cout<<"No. of taxable income(s):"<<taxables<<endl;
    }
    
    
    return 0;
}
