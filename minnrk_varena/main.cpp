#include <fstream>

using namespace std;

int k,f[10],cif_folosite,size_of_stk;
string n;

int main()
{
    ifstream in("minnrk.in");
    ofstream out("minnrk.out");
    in>>n>>k;
    size_of_stk=n.length();
    for(int i=1;i<=size_of_stk;i++)
    {
        f[n[i-1]-'0']++;
    }
    if(f[0])
    {
        for(int i=1;i<=9;i++)
        {
            if(f[i])
            {
                out<<i;
                f[i]--;
                cif_folosite++;
                break;
            }
        }
        for(int i=1;i<=f[0]&&cif_folosite<k;i++)
        {
            out<<0;
            cif_folosite++;
        }
        for(int i=1;i<=9&&cif_folosite<k;i++)
        {
            if(f[i])
            {
                for(int j=1;j<=f[i]&&cif_folosite<k;j++)
                {
                    out<<i;
                    cif_folosite++;
                }
            }
        }
    }
    else
    {
        for(int i=1;i<=9&&cif_folosite<k;i++)
        {
            if(f[i])
            {
                for(int j=1;j<=f[i]&&cif_folosite<k;j++)
                {
                    out<<i;
                    cif_folosite++;
                }
            }
        }
    }
    return 0;
}
