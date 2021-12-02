#include <iostream>
using namespace std;

int main()
{
    int n, v[500] = { 0 },i,j;
    bool found = true;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> v[i];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            if (v[i] != v[j] && i!=j)
                found = true;
            else
            {
                if (i != j)
                {
                    found = false;
                    break;
                }
            }
        if (found == false)
            break;
    }
    if (found == true)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}