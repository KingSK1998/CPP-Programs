#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < d; i++){
        int temp = arr[0];
        for(int j = 1; j < n; j++){
            arr[j-1] = arr[j];
        }
        arr[n-1] = temp;
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " "; 
        
    return 0;
}