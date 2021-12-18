#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < str.length() - i; j++)
            cout << str[j];
        for (int j = 1; j < i * 2; j++)
            cout << " ";
        for (int j = 1; j < str.length(); j++)
            cout << str[str.length() - j - i - 1];
        cout << endl;
    }
    return 0;
}