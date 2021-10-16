#include <iostream>
using namespace std;

int Ogl(int n)
{
    int oglindi = 0;
    while (n)
    {
        oglindi = oglindi * 10 + n % 10;
        n /= 10;
    }
    return oglindi;
}

int main()
{
    int n, x, difmax=1000000001, m = 1000000001, max = 0, min = 0, ogl=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        ogl = Ogl(x);
        if (ogl > x)
        {
            max = ogl;
            min = x;
        }
        else
        {
            max = x;
            min = ogl;
        }
        if (max - min < difmax)
        {
            difmax = max - min;
            m = x;
        }
        else
        {
            if (difmax == max - min)
            {
                if (x < m)
                    m = x;
            }
        }
    }
    cout << m;
}
