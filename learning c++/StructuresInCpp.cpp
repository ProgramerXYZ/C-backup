#include <bits/stdc++.h>
using namespace std;
    // creating structures in c++
    // A structure is a user-defined data type in C++ that allows you to combine data items of different kind in a singe function.
struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
};
// creating another structure in c++
    // this time using typedef keyword.
    // typedef is used to create an alias for a data type.
typedef struct employee_no_one
{
    /* data */
    int eId;      // 4
    char favChar; // 1
    float salary; // 4
} ep_n_one;
// Now we can use ep_n_one as a data type to create variables of that type.
// insted of struct employee_no_one harry; we can use ep_n_one harry; to call the structure.
int main()
//normal way of using a structure.
{
    // adding data to structure.
    //assigning name to employee structure.
    // struct employee harry; // creating a variable of type employee
    struct employee harry;
    // emoloyee id is in integer format in structure employee.
    harry.eId = 1;
    // assigning favourite character to employee structure.
    // favourite character is in character format in structure employee.
    harry.favChar = 'c';
    // assigning salary to employee structure.
    // salary is in float format in structure employee.
    harry.salary = 120000000;
    // printing the values of employee structure.  
    cout << "The value is " << harry.eId << endl;
    cout << "The value is " << harry.favChar << endl;
    cout << "The value is " << harry.salary << endl;

    // using typedef to create a variable of type employee_no_one.
    ep harry;
    struct employee shubham;
    struct employee rohanDas;
    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 120000000;
    cout << "The value is " << harry.eId << endl;
    cout << "The value is " << harry.favChar << endl;
    cout << "The value is " << harry.salary << endl;
    return 0;
}

