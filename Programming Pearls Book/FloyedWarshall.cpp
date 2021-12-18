#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n = 5;
    int distance[6][6];
    // INITIALIZATION
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i == j) distance[i][j] = 0;
            //else if(adj[i][j]) distance[i][j] = adj[i][j];
            else distance[i][j] = 999999;
    distance[1][2] = 5;
    distance[1][4] = 9;
    distance[1][5] = 1;
    distance[2][1] = 5;
    distance[2][3] = 2;
    distance[3][2] = 2;
    distance[3][4] = 7;
    distance[4][1] = 9;
    distance[4][3] = 7;
    distance[4][5] = 2;
    distance[5][1] = 1;
    distance[5][4] = 2;

    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                distance[i][j] = min(distance[i][j], distance[i][k] + distance[k][j]);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << distance[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}
