#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'maximumPower' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int maximumPower(string s) {
    bool terminate = true;
    for (int i = 0; i < s.length()-1; i++){
        if(s[i] != s[i+1]){
            terminate = false;
            break;
        }
    }
    if (terminate)
        return 0;
    
    //int num = stoull(s);
    int max = 0;
    int cycle = 0;
    for(int i = 0; i < s.length(); i++){
        int num = bitset<6>(s).to_ullong();
        if(max < num){
            max = num;
            cycle++;
        }
        s = s.substr(1,s.length()) + s.substr(0,1);
    }
    cycle--;
    if(max%2!=0)
        return -1;
    if(max%(int)pow(2, cycle)==0)
        return cycle;
    else
        return -1;
}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = maximumPower(s);

    cout << result << "\n";

    //fout.close();

    return 0;
}
