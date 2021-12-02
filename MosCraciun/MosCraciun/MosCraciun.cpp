#include <iostream>
using namespace std;

int main()
{
    int n, v[10], x, c = 0;
    cin >> n;
    for (int i = 0; i < n / 2; i++)
        cin >> v[i];
    for (int i = n / 2; i < n; i++)
    {
        cin >> x;
        bool found = false;
        for (int j = 0; j < n / 2; j++)
            if (x > v[j])
                found = true;
            else
            {
                found = false;
                break;
            }
        if (found == true)
            c++;
    }
    cout << c;
    return 0;
}