#include <bits/stdc++.h>
using namespace std;


int main()
{
    // Write your code here
    char uppercase[26] = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G',
        'H', 'I', 'J', 'K', 'L', 'M', 'N',
        'O', 'P', 'Q', 'R', 'S', 'T', 'U',
        'V', 'W', 'X', 'Y', 'Z'};
    string lowercase[26] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g',
        'h', 'i', 'j', 'k', 'l', 'm', 'n',
        'o', 'p', 'q', 'r', 's', 't', 'u',
        'v', 'w', 'x', 'y', 'z'};
    char letter;
    cin >> letter;
    bool f=false;
    for (int i = 0; i < 26; i++)
    {
        if(letter == uppercase[i]) {
            cout << 1 << endl;
            f=true;
        }
    for (int  i = 0; i < 26; i++)
    {
        if (letter == lowercase[i]) {
            cout << 0 << endl;
            f=true;
        }
        
    }
    if (!f){
        cout<<-1<<endl;
    }
    
    
    return 0;
}