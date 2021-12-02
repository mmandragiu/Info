#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("magnitudine.in");
ofstream cout("magnitudine.out");

int main()
{
    unsigned long long n, k, cifn[22] = { 0 },i=0;
    cin >> n >> k;
    while (n)
    {
        cifn[i] = n % 10;
        n /= 10;
        i++;
    }
    sort(cifn, cifn + i);
    if(k == 0)
    {
        cout << cifn[i - 1] - cifn[0];
    }
    if(k == 1)
    {
        if (cifn[i - 2] - cifn[0] <= cifn[i - 1] - cifn[1])
            cout << cifn[i - 2] - cifn[0];
        else
            cout << cifn[i - 1] - cifn[1];
    }
    if(k == 2)
    {
        if (cifn[i - 3] - cifn[0] <= cifn[i - 1] - cifn[2] && cifn[i - 3] - cifn[0] <= cifn[i - 2] - cifn[1])
            cout << cifn[i - 3] - cifn[0];
        else
            if (cifn[i - 1] - cifn[2] <= cifn[i - 3] - cifn[0] && cifn[i - 1] - cifn[2] <= cifn[i - 2] - cifn[1])
                cout << cifn[i - 1] - cifn[2];
            else
                cout << cifn[i - 2] - cifn[1];
    }
    return 0;
}