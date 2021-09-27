#include <fstream>

using namespace std;
ifstream in("exponent.in");
ofstream out("exponent.out");

int main()
{
    int n,k,multiplu=0,copiei;
    in>>n>>k;
    for(int i=k;i<=n;i=i+k)
    {
        copiei=i;
        while(copiei%k==0)
        {
            copiei=copiei/k;
            multiplu++;
        }
    }
    out<<multiplu;
    return 0;
}
