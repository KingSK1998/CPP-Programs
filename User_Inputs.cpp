#include <iostream>

using namespace std;

int main()
{
    cout << "Using cin" << endl;
    int age;
    cout<< "Enter age: ";
    cin >> age;  // double float char etc except string
    cout<< "Age: " << age << endl;

    cout<< endl;

    cout<< "FOR STRING" << endl;
    string name;
    cout<< "Enter name: ";
    cin.ignore();           // Use cin.ignore() beore calling getline().
    getline(cin, name);     // Allows us to enter entire line of text
    cout<< "Name: " << name << endl;

    return 0;
}
