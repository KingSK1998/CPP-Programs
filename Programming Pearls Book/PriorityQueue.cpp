#include <iostream>
using namespace std;

// template for priority queue
// Methods Available: insert, extractMin
template<class T> class priqueue  
{    
private:
    int n, maxsize;
    T *x; // pointer of T type
    void swap(int i, int j) 
    { 
        T t = x[i];
        x[i] = x[j];
        x[j] = t;
    }

public:
    priqueue(int m)
    {
        maxsize = m;
        x = new T[maxsize + 1];
        n = 0;
    }

    void insert(T t)
    {
        int i, p;
        x[++n] = t;
        for (int i = n; (i > 1) && (x[p = i/2] > x[i]); i = p)
            swap(p, i);
    }

    T extractMin()
    {
        int i, c;
        T t = x[1];     // Root
        x[1] = x[n--];  // 1 - last element
        for (i = 1; (c = 2*i) <= n; i = c)
        {
            if ((c+1 <= n) && (x[c+1] < x[c]))
                c++;
            if (x[i] <= x[c])
                break;
            swap(c, i);
        }
        return t;
    }
};

// A SORT USING HEAPS
// Template for sorting the priority queue
// contains pqsort(queue_list, length_of_queue)
template <class T> void pqSort(T v[], int n)
{
    // IDEA: Insert into a priority queue, 
    //       then remove in order

    priqueue<T> pq(n);              // Creating
    for (int i = 0; i < n; i++)     // Inserting
        pq.insert(v[i]);
    for (int i = 0; i < n; i++)     // Removing
        v[i] = pq.extractMin();

    /*Analysis: 
        Time Complexity : O(nlog(n)) time
        Space Complexity: n items of exta space*/
}

int main()
{
    const int n = 10;
    int i, v[n];
        priqueue<int> pq(100);
        while (cin >> i)
            if (i == 0)
                cout << pq.extractMin() << "\n";
            else
                pq.insert(i);
    v[i] = n-i;
        pqSort(v, n);
        for (i = 0; i < n; i++)
            cout << v[i] << "\n";
    return 0;
}