//?  ---> STRING ALGORITMS <------
//?  The Longest Dublicated String
//?  Markov Text
/* The Problem:
*       Input: ‘‘Ask not what your country can do for you,
*       but what you can do for your country’’.
*       Output: ‘‘ can do for you’’ (15 chars)
*/

#include <iostream>
#include <set>
#include <map>
using namespace std;

int main()
{
    map<string,int> M;
    string t;
    do
    {
        cin >> t;
        M[t]++;
    } while (t != "-1");
    for (auto& i : M)
        cout << i.first << " " << i.second << endl;
}