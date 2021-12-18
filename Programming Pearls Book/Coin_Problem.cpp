#include <iostream>
using namespace std;

#define INF 99999
const int N = 100;
int coins[] = {1, 3, 4};
bool ready[N];
int value[N];

int solve(int x) {
    if (x < 0) return INF;
    if (x == 0) return 0;
    if (ready[x]) return value[x];
    int best = INF;
    for (auto c : coins)
    {
        best = min(best, solve(x-c) + 1);
    }
    value[x] = best;
    ready[x] = true;
    return best;
}

int main(){
    // cout << "solve(1)  = " << solve(1) << endl;
    // cout << "solve(2)  = " << solve(2) << endl;
    // cout << "solve(3)  = " << solve(3) << endl;
    // cout << "solve(4)  = " << solve(4) << endl;
    // cout << "solve(5)  = " << solve(5) << endl;
    // cout << "solve(6)  = " << solve(6) << endl;
    // cout << "solve(7)  = " << solve(7) << endl;
    // cout << "solve(8)  = " << solve(8) << endl;
    // cout << "solve(9)  = " << solve(9) << endl;
    // cout << "solve(10) = " << solve(10) << endl;

    // Non recursive approach
    // int n = 6;
    // int first[n];
    // value[0] = 0;
    // for (int x = 1; x <= n; x++) {
    //     value[x] = INF;
    //     for (auto c : coins)
    //     {
    //         if (x-c >= 0 && value[x-c]+1 < value[x])
    //         {
    //             value[x] = value[x-c]+1;
    //             first[x] = c;
    //         }
    //     }
    // }
    // cout << "Coins Required: ";
    // while(n > 0) {
    //     cout << first[n] << " ";
    //     n -= first[n];
    // }
    // cout << endl;

    // int n = 5;
    // int m = 1000000007;
    // int count[n];
    // count[0] = 1;
    // for (int x = 1; x <= n; x++)
    // {
    //     for (auto c : coins)
    //     {
    //         if (x-c >= 0)
    //         {
    //             count[x] += count[x-c];
    //             count[x] %= m;
    //         }     
    //     }
    // }
  
    return 0;
}