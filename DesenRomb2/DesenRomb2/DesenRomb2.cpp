#include <iostream>
using namespace std;

int main()
{
    int n, nr_diez = 0, nr_stea = 0,k=1;
    cin >> n;
    nr_diez = (n * 2 - 2) / 2;
    while (k < n)
    {
        for (int i = 1; i <= n * 2 - 1; i++)
        {
            if (i <= nr_diez)
                cout << '#';
            
            else
            {
                if (i = nr_diez + nr_stea)
                    cout << '*';
                else
                    cout << '#';
            }
            nr_diez--;
            nr_stea += 2;
        }
    }
}
