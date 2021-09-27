#include <fstream>
#include <iostream>

using namespace std;
ifstream in("monotona.in");
ofstream out("monotona.out");

int main()
{
    int n,a,b,i,smmare=0,smmic=0,segal=0;
    in>>n;
    in>>a;
    if(n<=2)
    {
        out<<"da";
    }
    else
    {
        for(i=2; i<=n; i++)
        {
            in>>b;
            if (b>a)
            {
                smmare++;
            }
            if (b<a)
            {
                smmic++;
            }
            if(b==a)
            {
                segal++;
            }
            a=b;
        }
        if (smmic==0 || smmare==0)
        {
            out<<"da";
        }
        else
        {
            out<<"nu";
        }

    }



    return 0;
}
