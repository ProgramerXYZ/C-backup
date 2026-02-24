#include <bits/stdc++.h>
#include "toLowerCaseFunction.cpp"
using namespace std;

inline int subtract(int x, int y)
{
    return x - y;
}

inline int multyply(int x, int y)
{
    return x * y;
}

int main()
{
    bool end = false;
    while (!end) {
        string which_operation = "";
        cout << "what do you wana do substrsction(-), multiplication(*), addition(+) or division(/)? " << endl << ":";  
        cin >> which_operation;

        which_operation = toLowerCase(which_operation);// lower case

        if (which_operation == "multiplication" || which_operation == "*" || which_operation == "x"){
            int a, b;
            cin >> a >> b;
            cout << a << " multiplyed by " << b << "=" << multyply(a, b) << endl;
        }
        
    }
    return 0;
}