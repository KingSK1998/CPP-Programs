#include <bits/stdc++.h>

using namespace std;

void go(int n)
{
    int x = 0, y = 0;
    int d = 10;
    char c = 'R';
    while (n)
    {
        switch(c) {
            case 'R': x += d; c = 'U'; d += 10; break; 
            case 'U': y += d; c = 'L'; d += 10; break;
            case 'L': x -= d; c = 'D'; d += 10; break;
            case 'D': y -= d; c = 'A'; d += 10; break;
            case 'A': x += d; c = 'R'; d += 10; break;
        }
        n--;
    }   
    cout << x << " " << y << endl;
}

main() {
    go(3); go(4); go(5); go(7);
    // int n;
    // cin >> n;
    // int x = 0, y = 0;
    // int d = 0;
    // char turn = 'R';
    // for (int i = 0; i <= n; i++)
    // {
    //     switch (turn)
    //     {
    //         case 'R':  x += d;  turn = 'U';  d += 10;  break;
    //         case 'U':  y += d;  turn = 'L';  d += 10;  break;
    //         case 'L':  x -= d;  turn = 'D';  d += 10;  break;
    //         case 'D':  y -= d;  turn = 'R';  d += 10;  break;
    //         case 'X':  x += d;  turn = 'R';  d += 10;  break;
    //     }
    // }
    // cout << x << " " << y << endl;
}