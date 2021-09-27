#include <fstream>

using namespace std;
ifstream in("smartphone.in");
ofstream out("smartphone.out");

int main()
{
    int n,c,x,max=0,i,maxim2=0,semimaxim=0;
    in>>c>>n;
    if(c==1)
    {
        for(i=0;i<n;i++)
        {
            in>>x;
            if(x>max)
            {
                max=x;
            }
        }
        out<<max;
    }
    if(c==2)
    {
        for(i=0;i<n;i++)
        {

            in>>x;
            if(x>max)
            {
                semimaxim=max;
                max=x;
            }
            else
            {
                if(semimaxim<x && max>x )
                {
                    semimaxim=x;
                }
            }

        }
        out<<semimaxim;

    }
    return 0;
}
