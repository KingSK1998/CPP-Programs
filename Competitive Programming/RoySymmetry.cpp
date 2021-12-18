#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool com(string s1, string s2){
    if(s1.compare(s2) != 0)
        return true;
    return false;
}

string ss(vector<string> str, int n){
    for(int i = 0; i < n; i++){
        if(com(str[i], str[n-i-1]))
            return "NO";
        for(int j = 0; j < (n/2); j++){
            if(str[i][j] != str[i][n-j-1])
                return "NO";
        }
    }
    return "YES";
}

int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        vector<string> str(n);
        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            str[i] = s;
        }
        cout << ss(str, n) << "\n";
    }
    return 0;
}