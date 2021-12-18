#include <iostream>

using namespace std;

class Time{
    private:
        int H, M, S;
    public:
        void setTime(int h, int m, int s)
        {
            H = h;
            M = m;
            S = s;
        }

        void showTime()
        {
            cout << endl << H << ":" << M << ":" << S;
        }

        void normalize()
        {
            M += S/60;
            S %= 60;
            H += M/60;
            M %= 60;
        }

        Time operator +(Time t)
        {
            Time temp;
            temp.S = S + t.S;
            temp.M = M + t.M;
            temp.H = H + t.H;
            temp.normalize();
            return temp;
        }
};

int main()
{
    Time t;
    t.setTime(2,100,100);
    t.showTime();
    t.normalize();
    t.showTime();

    Time t1, t2, t3;
    t1.setTime(4,35,26);
    t2.setTime(3,50,45);
    t3 = t1 + t2;
    t1.showTime();
    t2.showTime();
    t3.showTime();
    return 0;
}