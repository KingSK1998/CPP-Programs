#include<iostream>
#include<string>
using namespace std;

bool pallindrome(string num)
{
    for (int i = 0; i < 7/2; i++)
    {
        if(num[i] == num[7-i]){
            return true;
        }
        else break;
    }
    return false;
}

int MakeNumber(int n1, int n2){
    int count = 0;
    if(n1 - n2 > 10)    return 0;
    int d,hh,mm,ss;
    int start = n1*1000000, end = n2*100000 + 235959;
    cout << "start " << start << " end " << end;
    for(int i = start; i <= end; i++){
        if(pallindrome(to_string(i)) == true)
            count++;
    }
    return count;
}
int main(){
    int n1, n2;
    cin >> n1 >> n2;
    cout << MakeNumber(n1, n2);
    return 0;
}
