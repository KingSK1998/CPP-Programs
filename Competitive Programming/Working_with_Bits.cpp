#include <iostream>
#include <string>
#include <bitset>
#include <map>
#include <set>
using namespace std;

string bits(int n) {
    if(n == 1) return "1#0#0";
    if(n == 0) return "0#0#0";
    string b = "";
    int c = 0;
    while(n > 0) {
        if(n%2 == 1){
            b = "1" + b;
            c++;
        }
        else b = "0" + b;
        n = n/2;
    }
    string f = to_string(c) + "#" + to_string(1) + "#" + to_string(b.length()-1); 
    return f;
}

int main() {
	
    cout << bits(10) << endl;
    cout << bits(1) << endl;
}
