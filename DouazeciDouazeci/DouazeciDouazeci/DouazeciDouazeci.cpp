#include <iostream>
using namespace std;

int main()
{
    int n, v[100], aparitie = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] * v[j] == 2020)
            {
                aparitie = 1;
                break;
            }
            else
                aparitie = 0;
        }
        if (aparitie == 1)
            break;
    }
    if (aparitie == 1)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}