#include <fstream>

using namespace std;
ifstream in("numar4.in");
ofstream out("numar4.out");

int main()
{
    int N,NR=0,u,i;
    in>>N;
    while(N)
    {
        u=N%10;
        for(i=0; i<=8; i=i+2)
        {
            if(u!=i)
            {
                NR++;
            }
        }
        N=N/10;
    }
    out<<NR;
    return 0;
}
