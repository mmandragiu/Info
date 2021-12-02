#include <iostream>
using namespace std;

int main()
{
    int n, v[1000];
    bool found = true;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] == 1 && v[i + 1] == 1)
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