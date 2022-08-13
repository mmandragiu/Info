#include <iostream>

using namespace std;

int main()
{
    int n, x, prevx;
    bool toateegale = true;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (i >= 1)
        {
            if (prevx != x)
                toateegale = false;
        }
        prevx = x;
    }
    if (toateegale)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}