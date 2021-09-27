#include <fstream>

using namespace std;
ifstream in("codjoc.in");
ofstream out("codjoc.out");

int main()
{
    long long n,s=0,x=10;
    in>>n;
    s=n;
    while(n>=x)
    {
        s=s+n%x;
        x=x*10;
    }
    out<<s;
    return 0;
}
