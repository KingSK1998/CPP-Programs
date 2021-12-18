#include <bits/stdc++.h>

using namespace std;

main(){
    char c[6] = {'0', '1', '0', '1', '1', '1'};
    //? Method 1: Takes O(n + n) == O(n)
    for (char z : c)    if (z == '0')   cout << z;
    for (char z : c)    if (z == '1')   cout << z;
    cout << endl << endl;
    //! Method 2: Takes O(n log n)
    sort(c, c+6);
    for (char i : c)    cout << i;
    cout << endl << endl;
    //* Method 3: Takes O(log n)
    multiset<char> s;
    for (char x : c)    s.insert(x);
    for (auto i : s)    cout << i;
    cout << endl << endl;
}