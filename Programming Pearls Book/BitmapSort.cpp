// Sort distinct integers in the range [0..N-1]
#include <iostream>
using namespace std;

#define BITSPERWORD 32
#define SHIFT 5
#define MASK 0x1F
#define N 10000000
int a[1 + N / BITSPERWORD];

void set(int i)
{ a[i>>SHIFT] |= (1 << (i & MASK)); }

void clr(int i)
{ a[i>>SHIFT] &= ~(1 << (i & MASK)); }

int test(int i)
{ return a[i >> SHIFT] & (1 << (i & MASK)); }

int main()
{
    for (int i = 0; i < N; i++)
        clr(i);
/*
    int top = 1 + N / BITSPERWORD;
    for (int i = 0; i < top; i++)
        a[i] = 0;
*/    
    for(int i; (cin >> i) && i != EOF;)
        set(i);

    for (int i = 0; i < N; i++)
        if (test(i))
            cout << i << endl;
}