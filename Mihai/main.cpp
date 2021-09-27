#include <iostream>

using namespace std;


int calculeazaSuma(int n)
{
    int sum =0;
    for(int i=1; i<=n; i++)
    {
        sum =sum+i*10;
    }
    return sum;
}

int main()
{
    int n;
    int sum;
    cout<<"Introduceti n:";
    cin>>n;
    cout<<"Suma primilor "<<n<<" multipli de 10 este: "<<calculeazaSuma(n);
    return 0;
}

