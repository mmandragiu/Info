#include <iostream>
#include <unordered_map>

using namespace std;
const int NMAX=1e5;
const int Smax=2000000000;
int a[NMAX+5], n;

long long CountPairs(long long S)
{
    unordered_map<int, int>MyMap;
    MyMap[a[1]]++;
    long long sol=0;
    for(int i=2; i<=n; i++)
    {
        sol+=MyMap[S-a[i]];
        MyMap[a[i]]++;
    }
    return sol;
}

int main()
{
    cin>>n;
    long long sol = 0;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(long long S=1; S<=Smax; S*=2)
    {
        sol+=CountPairs(S);
    }
    cout<<sol;
    return 0;
}
