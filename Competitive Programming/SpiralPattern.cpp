#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int k = 0; k < i; k++){
            cout << n - k;
        }
        for(int j = i; j < n; j++){
            cout << n-j;
        }
        for(int j = n-2; j >= i; j--){
            cout << n-j;
        }
        for(int k = 0; k < i; k++){
            cout << n - i - k;
        }
        cout << endl;
    }
    
    return 0;
}