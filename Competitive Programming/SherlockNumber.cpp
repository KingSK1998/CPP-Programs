/******************************************************************************
 * SOURCE: Appeared in Tech Mahindra Mindtree
 * AUTHOR: Shivam Kashyap - 28/Dec/2021
 * 
 * QUESTION: Sherlock number is a number in which the sum of its digits is an even number. 
 * You are given an integer input N. Your task is to return the count of all 
 * the Sherlock numbers between 0 to N (0<Sherlock number<=N).
 * 
 * Sample Testcases
 * Input    Output      Output Description
 * ---------------------------------------------------------------------
 * 518      260         Between 0 to 518, there are 260 Sherlock numbers.
 * ----------------------------------------------------------------------
 * 318      160         Between 0 to 318, there are 160 Sherlock numbers.
 * -----------------------------------------------------------------------
 * 848      425         Between 0 to 845, there are 425 Sherlock numbers.
* *****************************************************************************/

#include <iostream>  
using namespace std;

int count(int N)
{
    int sherlockNumber = 0;

    for (int i = 0; i < N+1; i++)
    {
        int sum = 0, m = 0, n = i;
        // sum of its digit
        while (n > 0)
        {
            m = n % 10;
            sum = sum + m;
            n = n / 10;
        }
        // if even number
        if (sum % 2 == 0)
        {
            sherlockNumber++;
        }
    }

    return sherlockNumber;
}

int main()
{
    cout << " 518 :  " << count(518) << endl;
    cout << " 318 :  " << count(318) << endl;
    cout << " 848 :  " << count(848) << endl;
    return 0;
}