#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
int how_many_times = 0;

void printName(int i, int n){
    if (i== n)
    {
        return;
    }
    cout<<"name"<<endl;
    printName(i+1, n);
    
}

int main(){
    int n = 0;
    cin>>n;
    printName(0, n);
    
    return 0;
}

