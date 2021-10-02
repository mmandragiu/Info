#include <iostream>
using namespace std;

int main()
{
    int n, v[1000] = { 0 };
    bool found = false;
    cin >> n;
    if (n == 1)
    {
        cin >> v[0];
        cout << v[0] << '\n' << "DA";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        cout << v[i];
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
    cout << '\n';
    if (found == true)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
