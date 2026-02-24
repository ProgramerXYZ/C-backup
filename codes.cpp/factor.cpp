#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number tou want the factor of."<<endl<<":";
    cin>>n;
    
    int i;
    int end;
    for (i = 1; i < n; i++)
    {
        if(n%i==0){
            cout<<i<<endl;
            
        
        }
        
    }
    cout<<n;
    
    

    return 0;
}
 