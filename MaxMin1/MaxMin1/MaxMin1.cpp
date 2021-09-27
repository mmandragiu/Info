#include <iostream>
using namespace std;

int main()
{
    int n, m, v1[101] = { 0 }, v2[101] = { 0 }, c = 0;
    cin >> n;
    bool found = false;
    for (int i = 1; i <= n; i++)
    {
        cin >> v1[i];
    }
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> v2[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int i2 = 1; i2 <= m; i2++)
        {
            if (v1[i] <= v2[i2])
                found = false;
            else
                found = true;
            if (found == false)
                break;
        }
        if (found == true)
            c++;
    }
    cout << c;
    return 0;
}