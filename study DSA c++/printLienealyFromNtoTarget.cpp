#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
void NtoTarget(int n, int target){
    if(n>target){
        return;
    }
    cout<<n<<endl;
    NtoTarget(n+1, target);
}

int main(){
    int target;
    cin>>target;
    NtoTarget(1, target);
    return 0;
}