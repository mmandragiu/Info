#include <iostream>
using namespace std;

int main()
{
    unsigned long long int n, st=0, dr=0, lungime = 1, max_lungime = 0, v[1001] = { 0 };
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == v[i + 1])
        {
            lungime++;
        }
        else
        {
            if (lungime >= max_lungime)
            {
                max_lungime = lungime;
                dr = i;
                st = i - lungime+1;
            }
            lungime = 1;
        }
    }
    cout << st << " " << dr;
    return 0;
}