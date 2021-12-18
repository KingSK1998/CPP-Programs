#include <iostream>
#include <set>
using namespace std;

// A Set Implementation
class IntSetImp
{
public:
    IntSetImp(int maxElements, int maxValue);
    void insert(int t);
    int size();
    void report(int *v);
};

// Algoritm Implementation
void gensets(int m, int maxValue)
{
    int *v = new int[m];
    IntSetImp S(m, maxValue);
    
    while (S.size() < m)
        S.insert(bigrand() % maxValue);
    
    S.report(v);
    for (int i = 0; i < m; i++)
        cout << v[i] << endl;
}
int bigrand() { return 1;}

// An STL Implentation
class IntSetSTL
{
private:
    set<int> S;
public:
    IntSetSTL(int maxElements, int maxValue);
    int size() { return S.size(); }
    void insert(int t) { S.insert(t); }
    void report(int *v)
    {
        int j = 0;
        set<int>::iterator i;
        for (i = S.begin(); i != S.end(); ++i)
            v[j++] = *i;        
    }
};

// (Sorted) Arrays
class IntSetArray {
    private:
        int n, *x;\
    public:
        IntSetArray(int maxElements, int maxValue)
        {
            x = new int[1 + maxElements];
            n = 0;
            x[0] = maxValue;
        }

        int size() { return n; }

        void insert(int t)
        {
            for (int i = 0; x[i] < t; i++)
            {
                if (x[i] == t) 
                    return;
                for (int j = n; j >= i; j--)
                    x[j + 1] = x[j];
                x[i] = t;
                n++;
            }
        }

        void report(int *v)
        {
            for (int i = 0; i < n; i++)
                v[i] = x[i];
        }
};

// (Sorted) Linked Lists
class IntSetList
{
private:
    int n;
    // val, *next
    struct node {
        int val;
        node *next;
        // node (val, next)
        node (int v, node *p)
        { 
            val = v;
            next = p;
        }
    };
    node *head, *sentinel;
    // rinsert (node *p, t)
    node *rinsert(node *p, int t)
    {
        if (p->val < t)
            p->next = rinsert(p->next, t);
        else
        {
            p = new node(t, p);
            n++;
        }
        return p;
    }
public:
    IntSetList(int maxElements, int maxValue)
    {
        sentinel = head = new node(maxValue, 0);
        n = 0;
    }
    int size() { return n; }
    void insert(int t) { head = rinsert(head, t); }
    void report(int *v)
    {
        int j = 0;
        node *p;
        for (p = head; p != sentinel; p = p->next)
            v[j++] = p->val;
    }
};

int main()
{

}