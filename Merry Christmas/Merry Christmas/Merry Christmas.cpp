#include <iostream>
using namespace std;

int main()
{
    unsigned long long int n, v[1000000], case_1 = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == 1)
        {
            for (int i2 = i; i2 <= n; i2++)
                if (v[i2] == 1)
                    case_1++;
        }
    }
    cout << case_1;
    return 0;
}