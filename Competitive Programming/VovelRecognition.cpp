#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // unsigned int t;
    // cin >> t;
    // while (t--)
    // {
    //     string str;
    //     cin >> str;
    //     map<string, int> m;

    //     int total = 0;
    //     for (int i = 0; i < str.length(); i++)
    //     {
    //         int j = str.length();
    //         while(j > 0){
    //             string s = str.substr(i, j--);
    //             int wovel = 0;
    //             wovel += count(s.begin(), s.end(), 'a');
    //             wovel += count(s.begin(), s.end(), 'e');
    //             wovel += count(s.begin(), s.end(), 'i');
    //             wovel += count(s.begin(), s.end(), 'o');
    //             wovel += count(s.begin(), s.end(), 'u');
    //             wovel += count(s.begin(), s.end(), 'A');
    //             wovel += count(s.begin(), s.end(), 'E');
    //             wovel += count(s.begin(), s.end(), 'I');
    //             wovel += count(s.begin(), s.end(), 'O');
    //             wovel += count(s.begin(), s.end(), 'U');
    //             m[s] = wovel;
    //         }
    //     }
    //     for (auto i : m)
    //         total += i.second;
    //     cout << total << "\n";
    // }
    // return 0;
     int n;
    cin >> n;
    char arr[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    while(n!=0)
    {
        string s;
        cin >> s;
        long long a = s.size();
        long long sum = 0;
        for(int i=0; i<a; i++)
        {
            bool exists = find(arr, arr+10, s[i]) != end(arr);
            if(exists == 1)
                sum += (i+1)*(a-i);
        }
        cout << sum << endl;
        n--;
    }
}