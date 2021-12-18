//* Problem: Find the LONGEST INCREASING SUBSEQUENCE of n elements.

#include <iostream>
using namespace std;
const int n = 8;    // ends at
int arr[n] = {6, 2, 5, 1, 7, 4, 8, 3};
void length(int N) {
    int length[N];
    for (int k = 0; k <= N; k++) {
        length[k] = 1;
        for (int i = 0; i < k; i++)
        {
            if (arr[i] < arr[k])
            {
                length[k] = max(length[k], length[i] + 1);
            }
        }
    }
    cout << length[N] << endl;
}

main(){
    for (int i = 0; i < n; i++)
    {
        cout << "length(" << i << "): ";
        length(i);
    }
}