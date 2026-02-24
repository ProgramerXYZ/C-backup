#include <bits/stdc++.h>

using namespace std;

// Function to convert a string to lowercase
string toLowerCase(const string& input) {
    string result = input;
    transform(result.begin(), result.end(), result.begin(), [](unsigned char c) {
        return tolower(c);
    });
    return result;
}
