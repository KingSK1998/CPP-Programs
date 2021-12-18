#include<iostream>
using namespace std;
        
        int checkfibonacci(int n)
        {
            int a = 0;
            int b = 1;
            if (n==a || n==b) return true;
            int c = a+b;
            while(c<=n)
            {
                if(c == n) return true;
                a = b;
                b = c;
                c = a + b;
            }
            return false;
        }

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    for(int i : arr)
        cout << (checkfibonacci(i) ? "TRUE" : "FALSE") << endl;
    return 0;
}