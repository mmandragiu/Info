#include <iostream>
using namespace std;

int main()
{
    long long n, x, max = -1000000000, aparitii = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x > max)
        {
            max = x;
            aparitii = 1;
        }
        else
        {
            if (x == max)
                aparitii++;
        }
    }
    cout << max <<" "<< aparitii;
    return 0;
}