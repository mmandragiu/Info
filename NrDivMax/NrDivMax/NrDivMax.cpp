#include <iostream>
using namespace std;
int NrDiv(int n)
{
    int div = 0;
    for(int i=1;i*i<=n;i++)
    {
        if (n % i == 0)
        {
            div++;
            if (i * i < n)
                div++;
        }
    }
    return div;
}

int main()
{
    int n, divmax = 0,div=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        div = 0;
        div=NrDiv(i); 
        if (div > divmax)
            divmax = i;
        if (div == divmax)
        {
            if (i < divmax)
                divmax = i;
        }
    }
    cout << divmax;
}