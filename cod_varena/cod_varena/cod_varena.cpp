#include <fstream>
using namespace std;
long cate = 0;
char c;
long v[300], N, f_i[20], cif, f_g[20], f[20], nr, nrc1, parolaionel, parolagigel, cerinta;

int selectie(long v[300], long m, long f[16])
{
    int i, j; long s = 0;
    for (i = 0; i <= 19; i++) 
        f[i] = 0;
    v[0] = 0;
    if (v[m] % 2 == 0) 
        f[2]++;
    s = 0;
    for (i = 1; i <= m; i++) 
        s += v[i];
    if (s % 3 == 0)
        f[3]++;
    if ((v[m - 1] * 10 + v[m]) % 4 == 0)
        f[4]++;
    if (v[m] % 5 == 0)
        f[5]++;
    if (f[2] && f[3]) 
        f[6]++;
    int s1 = 0, s2 = 0, s3 = 0;
    for (i = m; i > 5; i = i - 6)
    {
        s1 = v[i - 2] * 100 + v[i - 1] * 10 + v[i];
        s2 = v[i - 5] * 100 + v[i - 4] * 10 + v[i - 3];
        s3 += s1 - s2;
    }
    if (i == 5)
    {
        s1 = v[i - 2] * 100 + v[i - 1] * 10 + v[i];
        s2 = v[i - 4] * 10 + v[i - 3];
        s3 += s1 - s2;
    }
    if (i == 4)
    {
        s1 = v[i - 2] * 100 + v[i - 1] * 10 + v[i];
        s2 = v[i - 3];
        s3 += s1 - s2;
    }
    if (i == 3) 
        s3 += v[i - 2] * 100 + v[i - 1] * 10 + v[i];
    if (i == 2) 
        s3 += v[i - 1] * 10 + v[i];
    if (i == 1) 
        s3 += v[i];
    if (s3 < 0) 
        s3 = -s3;
    if (s3 % 7 == 0)
        f[7]++;
    if (m >= 3 && (v[m - 2] * 100 + v[m - 1] * 10 + v[m]) % 8 == 0)
        f[8]++;
    if (m == 2 && (v[m - 1] * 10 + v[m]) % 8 == 0)
        f[8]++;
    if (m == 1 && (v[m]) % 8 == 0)
        f[8]++;
    if (s % 9 == 0)
        f[9]++;
    if (v[m] == 0)
        f[10]++;
    s1 = 0, s2 = 0;
    for (i = 1; i <= m; i++)
        if (i % 2) 
            s1 += v[i]; 
        else 
            s2 += v[i];
    if (s1 > s2) 
        s = s1 - s2; 
    else 
        s = s2 - s1;
    if (s % 11 == 0)
        f[11]++;
    if (f[4] && f[3])
        f[12]++;
    if (s3 % 13 == 0)
        f[13]++;
    if (f[2] && f[7])
        f[14]++;
    if (f[3] && f[5])
        f[15]++;
    return 0;
}

int main()
{
    ifstream in("cod.in");
    ofstream out("cod.out");
    in >> cerinta;
    in >> N;
    for (int i = 1; i <= N; i++)
    {
        cif = 0;
        while (in >> c && c != '#')
        {
            cif++;
            v[cif] = c - '0';
        }
        selectie(v, cif, f);
        nr = 0;
        for (int j = 2; j <= 15; j++)
            nr += f[j];
        if (!nr)
            nrc1++;
        for (int j = 2; j <= 9; j++)
            f_i[j]+=f[j];
        for (int j = 10; j <= 15; j++)
            f_g[j] += f[j];
    }
    for (int i = 2; i <= 9; i++)
        parolaionel += f_i[i];
    for (int i = 10; i <= 15; i++)
        parolagigel += f_g[i];
    if (cerinta == 1)
        out << nrc1;
    if (cerinta == 2)
        out << parolaionel;
    if (cerinta == 3)
        out << parolagigel;
    return 0;
}