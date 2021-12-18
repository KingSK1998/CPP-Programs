#include <iostream>
#include <string>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if(i==j)
                cout << "-" << "  ";
            else if(i > j)
                cout << i << "  ";
            else
                cout << j << "  ";
        }
        cout << endl;
    }
    
    cout << " " << endl;
    return 0;
}

