/*******************************************************************
 * SOURCE: Appeared in Tech Mahindra Mindtree
 * AUTHOR: Shivam Kashyap - 28/Dec/2021
 * 
 * Question: You are given an integer N and integer array A as the input, 
 * where N denotes the length of A. Assume the sum of all the elements 
 * of A to be S. Write a program to return the product of N and S.
 * 
 * Constraints:
 * • The function must return an INTEGER denoting the product of the sum of the elements 
 *   and the length of the array.
 * • 1 ≤N≤ 10^5
 * • 1 ≤A[i] ≤ 10^5
 * 
 * Sample Testcases
 * Input    Output      Output Description
 * ---------------------------------------------------------
 * 2                    Sum of the elements is 23+45-68.
 * 23       136         Product of the sum with the length
 * 45                   is 2*68=136.
 * ---------------------------------------------------------
 * 4                    Sum of the elements is 1+2+3+4=10.
 * 1                    Product of the sum with the length is
 * 2        40          4*10=40.            
 * 3
 * 4
 * ----------------------------------------------------------
 * 3                    Sum of the elements is
 * 264      2721        264+334+309=907.Product of the sum
 * 334                  with the length is 3*907=2721.
 * 309
* *******************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int check(vector<int> A) {
    int sum = 0;
    for (int i : A)
    {
        sum = sum + i;
    }
    return sum * A.size();
}

int main() {
    vector<int> A1 {23, 45};
    vector<int> A2 {1, 2, 3, 4};
    vector<int> A3 {264, 334, 309};
    cout << check(A1) << endl;
    cout << check(A2) << endl;
    cout << check(A3) << endl;
    return 0;
}