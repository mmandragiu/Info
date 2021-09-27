#include <iostream>
using namespace std;

int main()
{
    int n, a, b, aparitii = 1, max = -1,dif;
    cin >> n >> a;
    for (int i = 2; i <= n; i++)
    {
        cin >> b;
        if (a > b)
            dif = a - b;
        if (b > a)
            dif = b - a;
        if (dif > max)
        {
            max = dif;
            aparitii = 1;
        }
        else
        {
            if (dif == max)
                aparitii++;
        }
        a = b;
    }
    cout << max << " " << aparitii;
}