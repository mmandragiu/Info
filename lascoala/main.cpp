#include <fstream>
#include <cmath>
using namespace std;
ifstream in("lascoala.in");
ofstream out("lascoala.out");

int main()
{
    int n,k,p;
    in>>n;
    p=sqrt(n-1);
    k=p*p;
    out<<n-k<<'\n';
    while (k)
    {
        out<<k<<" ";
        k--;
        if(k%p==0)
            out<<'\n';
    }
    return 0;
}
