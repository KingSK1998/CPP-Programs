#include <iostream>
using namespace std;

int FindOccurencesUsingBinarySearch(int A[], int n, int x, bool searchFirst) {
    int low = 0, high = n-1, result = -1;
    while(low <= high) {
        int mid = (low+high)/2;
        if(A[mid] == x) {
            result = mid;
            if(searchFirst)
                high = mid - 1;
            else
                low = mid + 1;
        }
        else if(x < A[mid]) high = mid-1;
        else low = mid+1;
    }
    return result;
}

main(){
    // Find number of ocurrences of an element x in O(logN) time
    int A[] = {1,1,3,3,5,5,5,5,5,9,9,11};
    int x;
    cout << "\nEnter a number: ";
    cin >> x;
    int l = sizeof(A) / sizeof(A[0]);
    int firstIndex = FindOccurencesUsingBinarySearch(A, l, x, true);
    if(firstIndex == -1)
        printf("Count of %d is %d", x, 0);
    else {
        int lastIndex = FindOccurencesUsingBinarySearch(A, l, x, false);
        printf("Count of %d is %d", x, lastIndex - firstIndex + 1);
    }
}