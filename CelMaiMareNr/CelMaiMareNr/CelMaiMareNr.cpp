#include <iostream>
using namespace std;
int cmmnr(int n)
{
    int cifn[9], noun = 0, i = 0;
    while (n)
    {
        cifn[i] = n % 10;
        n=n/10;
        i++;
    }
    for (int i1 = 0; i1 < i - 1; i1++)
    {
        for (int j = i1 + 1; j < i; j++)
        {
            if (cifn [j] < cifn [i1])
            {
                int copie = cifn [i1];
                cifn [i1] = cifn [j];
                cifn [j] = copie;
            }
        }
    }
    for (int i1 = i-1; i1 >= 0; i1--)
    {
        noun = noun * 10 + cifn[i1];
    }
    return noun;
}

int main()
{
    int n;
    cin >> n;
    cout << cmmnr(n);
    return 0;
}