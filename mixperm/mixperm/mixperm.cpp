#include <fstream>
using namespace std;

const int NMAX = 1e5 + 5;
int a[NMAX], b[NMAX], fra[NMAX], frb[NMAX], cnta, cntb, n, sol;

int main()
{
    ifstream in("mixperm.in");
    ofstream out("mixperm.out");
    //cnta=nr de elem din a care au frecv ==1
    //cntb=nr de elem din vectorul b care au frecv==1
    in >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> a[i], fra[a[i]]++;
        if (fra[a[i]] == 1)
            cnta++;
    }
    for (int i = 1; i <= n; i++)
    {
        in >> b[i], frb[b[i]]++;
        if (frb[b[i]] == 1)
            cntb++;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            fra[a[j]]--;
            if (fra[a[j]] == 0)
                cnta--;
            fra[b[j]]++;
            if (fra[b[j]] == 1)
                cnta++;
            frb[b[j]]--;
            if (frb[b[j]] == 0)
                cntb--;
            frb[a[j]]++;
            if (frb[a[j]] == 1)
                cntb++;
            if (cnta == n || cntb == n)
                sol++;
        }
        for (int j = i; j <= n; j++)
        {
            //revert swap
            fra[a[j]]++;
            if (fra[a[j]] == 1)
                cnta++;
            fra[b[j]]--;
            if (fra[b[j]] == 0)
                cnta--;
            frb[b[j]]++;
            if (frb[b[j]] == 1)
                cntb++;
            frb[a[j]]--;
            if (frb[a[j]] == 0)
                cntb--;
        }
    }
    out << sol;
}