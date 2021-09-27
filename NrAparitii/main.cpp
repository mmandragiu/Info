#include <fstream>

using namespace std;
ifstream in("nraparitii.in");
ofstream out("nraparitii.out");

int main()
{
    int n,x,nr_aparitii=0,primul_nr;
    in>>n;
    for(int i=n;i>=1;i--)
    {
        in>>x;
        if(i==n)
        {
            primul_nr=x;
        }
        if(x==primul_nr)
        {
            nr_aparitii++;
        }
    }
    out<<nr_aparitii;
    return 0;
}
