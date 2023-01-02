#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ifstream in("cuvmax.in");
    ofstream out("cuvmax.out");
    char prop[256],*p,prop_max[256],copie[256];
    int n,cuv,cuv_max=0;
    in>>n;
    for(int i=1;i<=n;i++)
    {
        cuv=0;
        in.get();
        in.get(prop,255);
        strcpy(copie,prop);
        p=strtok(prop," ");
        while(p!=NULL)
        {
            cuv++;
            p=strtok(NULL," ");
        }
        if(cuv>cuv_max)
            cuv_max=cuv,strcpy(prop_max,copie);
    }
    out<<prop_max;
    return 0;
}
