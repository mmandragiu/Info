#include <fstream>

using namespace std;
ifstream fin("regele.in");
ofstream fout("regele.out");

int main()
{
    int N,G,v,i,dif;
    fin>>N>>G;
    dif=N*(N+1)/2*10-G;
    for(i=1; i<=N; i++)
    {
        fin>>v;
        if(v==N-dif)
           {fout<<i;
           break;
           }
        }


    return 0;
}
