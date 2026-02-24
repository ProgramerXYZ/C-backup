#include <bits/stdc++.h>
#include "../toLowerCaseFunction.cpp"
using namespace std;

int main() 
{
    string inp;
    cin>>inp;
    int sum_of_odd , sum_of_even;
    int length_of_inp = inp.length();
    for (int i = 0; i < length_of_inp; i++)
    {

        
        int inp_At_i = stoi(inp.at(i)) - '0';
            sum_of_even += inp_At_i;
        }
        else if (inp_At_i)
        {
            /* code */
        }
        
        

    }
    

    return 0;
}