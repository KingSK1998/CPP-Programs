#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string str;
    cin >> str;
    if(str.length()<= 20) {
        unordered_map<char, int> d;
        for (char i : str){
            d[i]++;
        }
        bool f = true;
        for(auto i : d){
            if(i.second == 1){
                cout << i.first << endl;
                f = false;
            }
        }
        if(f)
            cout << "Exceptional String" << endl;
    }
    else {
        cout << "Wrong Input" << endl;
    }
} 