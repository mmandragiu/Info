#include <iostream>
using namespace std;

int main()
{
    int v[1000], n;
    bool found = false;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 1; i < n - 1; i++)
        if ((v[i] <= v[n - 1] && v[i] >= v[0])||(v[i] >= v[n - 1] && v[i] <= v[0]))
            found = true;
        else
        {
            found = false;
            break;
        }
    if (found == true)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}