/********************************************************************
 * Given a set of arrays of size N and an integer K, you have to    *
 * find the maximum integer for each and every contiguous           *
 * sub array of size K for each of the given arrays.                *
 * Sample Input                                                     *
 *  2                                                               *
 *  5 2                                                             *
 *  3 4 6 3 4                                                       *
 *  7 4                                                             *
 *  3 4 5 8 1 4 10                                                  *
 *  Sample Output                                                   *
 *  4 6 6 4                                                         *
 *  8 8 8 10                                                        *
 ********************************************************************/
#include <iostream>
#include <deque>    // STL - Standard Template Library

using namespace std;

void printKMax(int arr[], int n, int k){
    deque<int> dq;

    for (int i=0; i<n; i++){
        // base case for first element
        if (dq.empty())
            dq.push_back(i);

        // remove elements outside the current window
        if (dq.front() <= (i - k))
            dq.pop_front();

        // move max element to the front
        while (!dq.empty() && arr[i] >= arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);

        // print out only when the first window is completed
        if (i >= (k - 1))
            cout << arr[dq.front()] << " ";
    }
    cout << endl;
}

int main(){

	// int t;
	// cin >> t;
	// while(t>0) {
		// int n,k;
    	// cin >> n >> k;
    	// int i;
    	// int arr[n];
    	// for(i=0;i<n;i++)
      	// 	cin >> arr[i];
    	// printKMax(arr, n, k);

        int a1[5] = {3, 4, 6, 3, 4};
        int a2[7] = {3, 4, 5, 8, 1, 4, 10};
    	printKMax(a1, 5, 2);
    	printKMax(a2, 7, 4);
  	// }
  	return 0;
}