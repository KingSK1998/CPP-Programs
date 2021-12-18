#include <bits/stdc++.h>

using namespace std;

int baseToDecimal(string value, int baseTo){
    int n = value.length();
    int base = 1;
    int dval = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (value[i] >= '0' && value[i] <= '9')
        {
            dval += (value[i] - 48) * base;
            base *= baseTo;
        }
        else if (value[i] >= 'A' && value[i] <= 'Z')
        {
            dval += (value[i] - 55) * base;
            base *= baseTo;
        }
    }
    return dval;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string input;
    cin >> input;
    cout << baseToDecimal(input, 17) << "\n";
}