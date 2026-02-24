#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;


int print_back(int n){
    if(n<=0) return 0;
    return n+print_back(n-1);
    
}
int main(){
   cout<< print_back(5);
    return 0;
}