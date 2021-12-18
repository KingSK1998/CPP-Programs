#include <iostream>

using namespace std;

class Chef {
    public:
        void makeKhadiChawal(){
            cout << "The chef makes Khadi Chawal" << endl;
        }
        void makeSalad(){
            cout << "The chef makes Salad" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes Rajma Chawal" << endl;
        }
};

class ItalianChef : public Chef{
    public:
        void makePasta(){
            cout << "The chef makes pasta" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes Raitha" << endl;
        }
};

int main()
{
    Chef chef;
    chef.makeKhadiChawal();
    chef.makeSpecialDish();

    ItalianChef italianChef;
    italianChef.makePasta();
    italianChef.makeSpecialDish();

    return 0;
}
