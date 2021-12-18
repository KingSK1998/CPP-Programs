#include <iostream>
#include <vector>
using namespace std;

int count = 0;
int n = 4*4;
vector<int> column(n);
vector<int> diag1(n);
vector<int> diag2(n);

void searchNQueen(int y) 
{
    if (y == n) 
    {
        count++;
        cout << count << endl;
        return;
    }
    for (int x = 0; x < n; x++)
    {
        if (column[x] or diag1[x+y] or diag2[x-y+n-1])
            continue;
        column[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
        searchNQueen(y+1);
        column[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
    }
}

int main()
{
    searchNQueen(0);
    return 0;
}
