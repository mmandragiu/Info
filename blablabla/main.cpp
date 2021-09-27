#include <fstream>

using namespace std;
ifstream cin ("cifra.in");
ofstream cout("cifra.out");

int main()
{
    int n,c;
    cin>>n>>c;
    for(int i=c+18;i<=n+18;i=i+18)
        cout<<i-18<<" "<<i-9<<" ";
    return 0;
}
