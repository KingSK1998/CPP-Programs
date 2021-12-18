#include<bits/stdc++.h>
using namespace std;
main(){
    int sno[] = {0, 1, 2};
    string name[] = {"0", "Veg Sandwitch", "Cheese Sandwitch"};
    double price[] = {0, 80.0, 130.0};
    double amaount = 0;
    while (true)
    {
        int menu, quantity;
        char again;
        cin >> menu >> quantity >> again;
        if (menu < 1 && menu > 21){
            cout << "INVALID INPUT";
            break;
        }
        amaount += price[menu]*quantity;
        if (again == 'n') break;
    }
    cout << amaount << " INR";
    return 0;
}