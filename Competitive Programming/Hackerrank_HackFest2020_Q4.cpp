//RGB Queries
#include <bits/stdc++.h>
#define POW 100000
using namespace std;

long int color[POW][3];

bool recur(long int x, int n, int i){
    if (n < 0)
        return false;
    if(x == color[n][i])
        return true;
    n--;
    return recur(x, n, i);    
}
int main()
{
    long int n, q;
    cin >> n >> q;
    // R G B
    long int r, b, g;
    long int mr = 0, mb = 0, mg = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> color[i][j];
            if(mr < color[i][0])
                mr = color[i][0];
            if(mb < color[i][1])
                mb = color[i][1];
            if(mg < color[i][2])
                mg = color[i][2];   
        }
    }
    
    for (int querry = 0; querry < q; querry++)
    {
        cin >> r >> b >> g;
        if(recur(r, n, 0) && recur(b, n, 1) && recur(g, n, 2)) 
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        /*
        if(r > mr && b > mb && g > mg)
            cout << "NO";
        else
        {
            bool cr = false, cb = false, cg = false;
            for (int i = 0; i < n; i++)
            {
                if((color[i][0] == r) && !cr) 
                    cr = true;
                if((color[i][1] == b) && !cb) 
                    cb = true;
                if((color[i][2] == g) && !cg) 
                    cg = true;
                if(cr && cb && cg)  break;
            }
            if(cr && cb && cg) cout << "YES";
            else cout << "NO";
        }*/
    }   
    return 0;
}