#include <iostream>
using namespace std;

int main()
{
    int v[1000], n;
    bool crescator = false, descrescator = false, constant = false;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] >= v[i - 1])
            crescator = true;
        else
        {
            crescator = false;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] <= v[i + 1] || v[i]>=v[i+1])
            descrescator = true;
        else
        {
            descrescator = false;
            break;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
            constant = true;
        else
        {
            constant = false;
            break;
        }
    }
    if (crescator == true)
        cout << "sir crescator";
    else
    {
        if (descrescator == true)
            cout << "sir descrescator";
        else
        {
            if (constant == true)
                cout << "sir constant";
            else
                cout << "sir neordonat";
        }
    }
    return 0;
}