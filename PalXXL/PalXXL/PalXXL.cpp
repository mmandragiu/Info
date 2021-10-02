#include <iostream>
using namespace std;

int main()
{
    int n, v[1000] = { 0 },x=0;
    bool found = false;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = n - 1; i >= 0; --i)
    {
        x = x * 10 + v[i];
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (v[i] == v[n - i - 1])
            found = true;
        else
        {
            found = false;
            break;
        }
    }
    cout << x << endl;
    if (found == true)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
