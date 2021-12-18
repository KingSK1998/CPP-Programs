#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;

bool prime(int n) {
    if (n < 2) return false;
    for (int x = 2; x*x <= n; x++)
        if (n%x == 0) return false;
    return true;
}

set<int> factors(int n) {
    set<int> f;
    for (int x = 2; x*x <= n; x++)
    while (n%x == 0) {
        f.insert(x);
        n /= x;
    }
    if (n > 1) f.insert(n);
    return f;
}

void findPrimesUpto(int n) {
    vector<int> sieve(n+1, 0);
    for (int x = 2; x <= n; x++) {
        if (sieve[x]) continue;
        for (int u = 2*x; u <= n; u += x)
            sieve[u] = x;
    }
    cout << "Primes: ";
    int count = 0;
    for (int i = 2; i <= n; i++)
        if (sieve[i] == 0) {
            cout << i << " ";
            count++;
        }
    cout << "\nTotal: " << count << endl;
}

int combinations(int n) {
    //TODO: Or just use 2^(n-1)
    //? How:    pow(2, n-1)
    if (n == 0) return 1;
    if (n == 1) return 1;
    return 2 * combinations(n - 1);
}

int factorial(int n) {
    if (n == 0) return 1;
    if (n == 1) return 1;
    return n * factorial(n-1);
}

int binomialCoefficient(int n, int k) {
    int answer = factorial(n) / (factorial(k) * factorial(n-k) );
    return answer;
}

main() {
    // cout << "\nIs 23 is prime?\nAnswer: " << (prime(23) ? "Yes" : "No") << "\n\n";
    
    // cout << "What are the factors of 24?\nAnswer: ";
    // set<int> f = factors(24);
    // for (int i : f) cout << i << " ";
    
    // cout << "\n\nWhat and how many primes exist until 20?\nAnswer: \n";
    // findPrimesUpto(20);
    // cout << "\n";

    // cout << "\nCombinations: \n";
    // cout << pow(2, 4-1) << endl;    // Using Formula
    // cout << combinations(4) << endl;    // Using Recursion

    // cout << "\nBinomial Coefficient: ";
    // cout << binomialCoefficient(5, 3);
    cout << "\nScenario 1: Each box can contain at most one ball: " << binomialCoefficient(5,2);
    cout << "\nScenario 2: A box can contain multiple balls: " << binomialCoefficient(5,2);
   
}