#include <iostream>

using namespace std;

int Cifre(int n)
{
	int cif=0;
    while(n)
    {
        cif++;
        n/=10;
    }
    return cif;
}

int main()
{
    int n,k;
    cin>>n;
    cout<<1;
    for(int i=1;i<=n;i++)
        for(int i1=1;i1<=Cifre(n-1);i1++)
        	cout<<0;
    return 0;
}
