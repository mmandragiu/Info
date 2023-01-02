#include <iostream>

using namespace std;

int main()
{
    int n, x, prevx;
    bool toatecresc = true;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (i >= 1)
        {
            if (prevx > x)
                toatecresc = false;
        }
        prevx = x;
    }
    if (toatecresc)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}