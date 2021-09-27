#include <fstream>
#include <iostream>

using namespace std;
ifstream in("subcresc.in");
ofstream out("subcresc.out");

int main()
{
    long long n,a,b,i,lungimeCurenta=1,cmmLungime;
    in>>n;
    in>>a;
    cmmLungime=lungimeCurenta;
    if(n<2)
    {
        out<<0;
    }
    else
    {
        for(i=2; i<=n; i++)
        {
            in>>b;
            if(b>=a)
            {
                lungimeCurenta++;
            }
            else
            {
                if(lungimeCurenta>cmmLungime)
                {
                    cmmLungime=lungimeCurenta;
                }
                lungimeCurenta=1;
            }

            a=b;
        }
        if(lungimeCurenta>cmmLungime)
        {
            cmmLungime=lungimeCurenta;
        }
        out<<cmmLungime;
    }

    return 0;
}
