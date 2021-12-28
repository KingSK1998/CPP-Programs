/****************************************************************************
 * SOURCE: Appeared in Mindtree
 * AUTHOR: Shivam Kashyap - 28/Dec/2021
 * 
 * ---------------------------------------------------------------------
 * STATUS: WRONG OUTPUT, Please provide correct solution if possible.
 * ---------------------------------------------------------------------
 * 
 * QUESTION: You are given an integer input X. 
 * For any number A having Z digits, where 0<A<=X, 
 * let the sum of each digit raised to the power z be S.
 * Write a program to return the count of all the A's 
 * where the S corresponding to it is a prime number
 * and the number of digits in S is equal to Z.
 * 
 * Input : int X
 * Output: Returns an INTEGER denoting the total number of 
 *          possible combination of A which are accepted.
 * Constraints: 1 <= X <= 10^5
 * 
 * SAMPLE TEST CASES:
 *  Input   Output      Description
 *  2283    227         227 combinations of A are possible, where x=2283
 *  5514    483         483 combinations of A are possible, where x=5514
 *  5880    515         515 combinations of A are possible, where x=5880
* *****************************************************************************/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// check if prime number
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

// for any number A having Z digits where O<A<=X
vector<int> Z_Digits(int A)
{
    vector<int> arr;
    int m = 0;
    while (A > 0)
    {
        m = A % 10;
        A = A / 10;
        arr.push_back(m);
    }
    return arr;
}

int sumOfEachDigitRaisedToThePowerZ(int A, int Z)
{
    int S = 0;
    for (int i : Z_Digits(A))
    {
        S = S + pow(i, Z);
    }
    return S;
}

// return count
int count(int X)
{
    int count = 0;
    // of all the A's
    for (int A = 1; A <= X; A++)
    {
        // where S
        int Z = Z_Digits(A).size();
        int S = sumOfEachDigitRaisedToThePowerZ(A, Z);
        // is the corresponding to
        // it is a prime number
        if (isPrime(S))
        {
            // and the number of digits in S = Z
            if (Z_Digits(S).size() == Z)
            {
                count++;
                // cout << "count = " << count << "\t\tA = " << A << endl;
            }
        }
    }
    return count;
}

int main()
{
    // freopen("D:/GitHub Repositories/Do Not Publish It/output.txt", "w", stdout);
    cout << "Result for 2283 : " << count(2283) << endl; // should return 227
    cout << "Result for 5514 : " << count(5514) << endl; // should return 483
    cout << "Result for 5880 : " << count(5880) << endl; // should return 515
    return 0;
}