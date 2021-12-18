// Simple Program to show:
// How to create and destroy dynamic arrays
// Similar to Vectors
#include <iostream>

using namespace std;

int main()
{
    // CREATE 2D ARRAYS
    int **a2d = new int *[5];
    for (int i = 0; i < 5; i++)
        a2d[i] = new int[5];

    // Perform Operations Here
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << a2d[i][j] << " ";
        }
        cout << endl;
    }

    // DELETE ARRAYS
    for (int i = 0; i < 5; i++)
        delete[] a2d[i];
    delete[] a2d;

    return 0;
}
