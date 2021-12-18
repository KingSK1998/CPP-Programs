#include <iostream>

using namespace std;

int main()
{
    int age = 19;
    double gpa = 2.7;
    string name = "Mike";

    cout << "Memory address of age: " << &age << endl;
    cout << "Memory address of gpa: " << &gpa << endl;
    cout << "Memory address of name: " << &name << endl;

    // Creating POINTERS
    int *pAge = &age;
    double *pGpa = &gpa;
    string *pName = &name;

    cout << "Pointer pAge: " << pAge << endl;
    cout << "Pointer pGpa: " << pGpa << endl;
    cout << "Pointer pName: " << pName << endl;

    // DeReferencing pointers
    cout << "DeReference pAge: " << *pAge << endl;
    cout << "DeReference pGpa: " << *pGpa << endl;
    cout << "DeReference pName: " << *pName << endl;

    // Note:
    cout << "NOTE" << endl;
    cout << "&gpa: " << &gpa << endl;
    cout << "*&gpa: " << *&gpa << endl;
    cout << "&*&gpa: " << &*&gpa << endl;

    return 0;
}
