#include <iostream>
using namespace std;

int main()
{
    int n, p, putere=0,nr=1,copien;
    cin >> n >> p;
    copien = n;
    cout << 1 << " ";
    while (n < p)
    {
        putere++;
        for (int i = 1; i <= putere; i++)
            nr = nr * copien;
        n = nr;
        if (n > p)
            break;
        cout << nr << " ";
        nr = 1;
    }
    return 0;
}