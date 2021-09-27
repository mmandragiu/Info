#include <fstream>

using namespace std;
ifstream in ("ucif.in");
ofstream out ("ucif.out");
int main()
{
    int i,n,nr,nar=1,sum=0;
    in>>n;
    for(nr=1;nr<=n;nr++)
    {
        for(i=1;i<=nr;i++)
        {
            nar=nar*nr%10;

        }
        sum=sum+nar%10;
        nar=1;
    }
    out<<sum%10;
    return 0;
}
