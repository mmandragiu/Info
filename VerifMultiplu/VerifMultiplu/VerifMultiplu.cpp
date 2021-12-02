#include <iostream>
using namespace std;

int main()
{
    int v[100] = { 0 }, n;
    cin >> n;
    bool found = false;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] % v[n - 1] == 0)
            found = true;
        else
        {
            found = false;
            break;
        }
    }
    if (found == true)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}