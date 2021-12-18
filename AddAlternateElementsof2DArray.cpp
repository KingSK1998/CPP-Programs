#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <exception>
using namespace std;

int left_or_right(vector<int> A, int start, int target, char direction)
{
    int n = A.size();
    int c = 0;
    for (int i = start; i < target; i++)
    {
        if (direction == 'L')
        {
            start = A[(i - 1 + n) % n];
            c++;
        }
        else
        {
            start = A[(i + 1) % n];
            c++;
        }
    }
    return c;
}

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        std::cin >> x;
        A[i] = x;
    }

    for (int i = 0; i < q; i++)
    {
        int y, z;
        char d;
        cin >> y >> z >> d;
        std::cout << left_or_right(A, y, z, d) << "\n";
    }
}