#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int p, st = 0, dr;
    char c[256];
    cin >> p;
    dr = p - 1;
    cin.get();
    cin.get(c, 256);
    for (int i = 1; i <= strlen(c) - p + 1; i++)
    {
        for (int j = 0; j < strlen(c); j++)
        {
            if (j >= st && j <= dr)
            {
            }
            else
                cout << c[j];
        }
        cout << endl;
        st++, dr++;
    }
    return 0;
}