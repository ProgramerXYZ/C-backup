#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

// Function to convert a string to lowercase
string toLowerCase(const string& input) {
    string result = input;
    transform(result.begin(), result.end(), result.begin(), [](unsigned char c) {
        return tolower(c);
    });
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
 
    string lowerStr = toLowerCase(str); // Reintroduce the declaration of lowerStr

    cout << lowerStr << endl;

    return 0;
}