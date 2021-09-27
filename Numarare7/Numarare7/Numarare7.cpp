#include <iostream>
using namespace std;

int main()
{
    float v[200],primulelement=0,ultimulelement=0;
    int numere = 0, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        primulelement = v[0];
        ultimulelement = v[n - 1];
    }
    for (int i = 1; i < n-1; i++)
    {
        if (ultimulelement < primulelement)
        {
            if((v[i]<ultimulelement&&v[i]<=primulelement)|| v[i]>primulelement)
                numere++;
        }
    }
    cout << numere;
}