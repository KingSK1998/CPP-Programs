/****************************************************************************************
 * RANGE OF QUERIES                                                                     *
 * Goolge Coding Challenge 2020 26-Sep-2020 3:00 PM IST                                 *
 * Question: You are given an array A with N integers. You are required to answer       *
 * Q queries of the following types: L R. Determine the count of distinct prime numbers *
 * that divide all the array values from index L to R.                                  *
 * NOTE: Consider 1 based indexing                                                      *
 * NOTE: Sample test cases found at the end of program without cout satements.          *
 ***************************************************************************************/
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	unsigned int t;
    cout << "Enter number of test cases (recommended 1): ";
	cin >> t;
	while(t--){ // test cases
		int n;
		cin >> n;
        cout << "Enter the size of array: ";
		int a[n+1], max = 0;
        cout << "Enter the " << n << " space separated arrays: ";
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			if(max < a[i])     // how many primes must be found
				max = a[i];
		}

		// prime number from 2 - max
		vector<int> primes;
		primes.push_back(2);
		for( int i = 3; i < max; i++){
			bool prime = true;
			for (int j = 0; j < primes.size() && primes[j]*primes[j] <= i; j++){
				if(i%primes[j] == 0){
					prime = false;
					break;
				}
			}
			if(prime){
				primes.push_back(i);
			}
		}
        
		// queries
		int q, q1, q2;
		cin >> q;
        int answers[q];
		for(int i = 1; i <= q; i++){
			cin >> q1 >> q2;
			int cp = 0;
            int maxOfQ = max;
			for(int l = q1; l <= q2; l++){  // from index q1 = 1 to q2 = 2
                if(maxOfQ > a[l]){          // maxofq = smallest element in array from q1 to q2 index i.e. 4
                    maxOfQ = a[l];          // maxofq = 4
                }
			}
            for(int k = 0; primes[k] <= maxOfQ; k++){   // primes[0 to maxofq] i.e. 2, 3
                bool x = true;                          // x = checker
                for(int l = q1; l <= q2; l++){          // same as up
                    if(a[l]%primes[k] != 0){            // if any 1 array element is not divisible to prime number
                        x = false;                      // checker = false
                        break;                          // break it
                    }                                   
                }
                if(x){  // if checker is true means all element of array is divisible by prime number
                    cp++;   // one prime aquired now move to next till we encounter biggest array element
                }
            }
			answers[i-1] = cp;        // showing output : this is what we need
		}

        cout << endl << "SHOWING ANSWERS" << endl;
        for (int i = 0; i < q; i++)
        {
            cout << answers[i] << endl;
        }
	}		
}

/****************************************************************************
 *  Sample Input 1                                      *   Sample Output   *
 * 1                                                    *   1               *
 * 6                                                    *   1               * 
 * 4 6 3 18 36 54                                       *   2               *
 * 3                                                    *                   *
 * 1 2                                                  *                   *
 * 3 6                                                  *                   *
 * 4 6                                                  *                   *
 ****************************************************************************
 *  Sample Input 2                                      *   Sample Output   *
 * 1                                                    *   3               *
 * 9                                                    *   0               * 
 * 7088 74578 2746 96295 86884 21198 28655 22503 7868   *                   *
 * 2                                                    *                   *
 * 9 9                                                  *                   *
 * 6 8                                                  *                   *
 ***************************************************************************/