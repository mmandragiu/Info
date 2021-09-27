#include <fstream>

using namespace std;
ifstream in("n_suma.in");
ofstream out("n_suma.out");

int main()
{
    int n,v,s=0;
    in>>n;
    for(int i=1; i<=n; i++)
    {
        in>>v;
        s=s+v;
    }
    out<<s;
    return 0;
}
