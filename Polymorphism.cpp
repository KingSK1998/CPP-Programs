#include <iostream>

using namespace std;

/*
POLYMORPHISM:
    when a single variable, reference or pointer connects to an instance of inheritance.
*/

 class Base {
public:
    void Print() {
        cout << "Inside Base" << endl;
    }
 };

 class Derived : public Base {
 public:
     void Print() {
        cout << "inside Derived" << endl;
     }
 };

int main()
{
    Base b;
    Derived d;
    b.Print();
    d.Print();

    Base &br = d;
    Derived &dr = d;
    br.Print();
    dr.Print();

    Base* bp = new Derived();
    Derived* dp = new Derived();
    bp -> Print();
    dp -> Print();

    return 0;
}
