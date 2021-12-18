#include <iostream>
#include <vector>

using namespace std;

bool isSymmetric(vector<vector<int>> matrix, int n) {
    int hs = n/2;
    for(int i = 0; i < hs; i++) {
        for(int j = 0; j < hs; j++) {
            if((matrix[i][j] != matrix[n-i-1][j]) && (matrix[i][n-1-j] != matrix[n-i-1][n-j-1])) // X symmetry
                return false;
            if((matrix[j][i] != matrix[j][n-i-1]) && (matrix[n-j-1][i] != matrix[n-j-1][n-i-1])) // Y symmetry
                return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        vector<vector<int>> tc(n);
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++){
                int x;
                cin >> x;
                tc[i][j] = 1;
            }
        cout << (isSymmetric(tc, n) ? "YES" : "NO") << "\n";
    }
    
    
    return 0;
}
    // vector<vector<int>> tc1 = {
    //     {1, 1},
    //     {1, 1}};
    // vector<vector<int>> tc2 = {
    //     {0,1,0,1},
    //     {0,1,1,0},
    //     {0,1,1,0},
    //     {0,1,0,1}};
    // vector<vector<int>> tc3 = {
    //     {1,0,0,1},
    //     {0,0,0,0},
    //     {0,0,0,0},
    //     {1,0,0,1}};
    // vector<vector<int>> tc4 = {
    //     {0,1,1,1,0},
    //     {0,1,0,1,0},
    //     {1,0,0,0,1},
    //     {0,1,0,1,0},
    //     {0,1,1,1,0}};
    // vector<vector<int>> tc5 = {
    //     {0,0,1,0,0},
    //     {0,1,0,1,0},
    //     {1,0,0,0,1},
    //     {0,1,0,1,0},
    //     {0,1,1,1,0}};
    // cout << (isSymmetric(tc1, 2) ? "YES" : "NO") << "\n";    // YES
    // cout << (isSymmetric(tc2, 4) ? "YES" : "NO") << "\n";    // NO
    // cout << (isSymmetric(tc3, 4) ? "YES" : "NO") << "\n";    // YES
    // cout << (isSymmetric(tc4, 5) ? "YES" : "NO") << "\n";    // YES
    // cout << (isSymmetric(tc5, 5) ? "YES" : "NO") << "\n";    // NO