#include <fstream>
using namespace std;
ifstream in("sir.in");
ofstream out("sir.out");

int main()
{
    long long c, n, x, v[100000],pozitie=0,max=0;
    v[0] = 0;
    in >> c >> n;
    for (int i = 1; i <= n; i++)
    {
        in >> x;
        if (x > max)
            max = x;
        v[i] = x;
    }
    if (c == 1)//verifica daca interogarea este de tip 1
    {
        for (int i = 1; i <= n; i++)
        {
            int copiei2 = i;
            for (int i2 = i; i2 < n; i2++)
            {
                if (i2==copiei2)//verificam daca i2 este egal cu copiei2
                                //daca da, vom verifica daca v[copiei2]>v[i2+1]
                {
                    if (v[copiei2] > v[i2 + 1])//daca v[copiei2] este mai mare decat urmatorul termen, pozitie=copiei2
                        pozitie = copiei2;
                    else
                    {
                        pozitie = 0;//daca nu, pozitie devine 0
                        break;
                    }
                }
                else//daca nu, vom verifica daca v[copiei2]>v[i2]
                {
                    if (v[copiei2] > v[i2])
                        pozitie = copiei2;
                    else
                    {
                        pozitie = 0;
                        break;
                    }
                }
                
            }
            if (pozitie == copiei2)
                break;
        }
        out << pozitie;
    }
    if (c ==2) 
    {
        out << 1 << " ";
        int contor = 1;
        for (int i = n; i >= 1; i--)
        {
            int i2;
            int copiei2 = i;
            int maimare = 0;
            for (i2 = i; i2 > 1; i2--)
            {
                if (copiei2 == i2)
                {
                    if (v[copiei2] > v[i2 - 1])
                        maimare = 1;
                    else
                    {
                        maimare = 0;
                        break;
                    }
                }
                else
                {
                    if (v[copiei2] > v[i2])
                        maimare = 1;
                    else
                    {
                        maimare = 0;
                        break;
                    }
                }
            }
            if (maimare == 1)
                v[contor] = i;
        }
        for (int i2 = 1; i2 <= contor; i2++)
        {
            out << v[i2];
        }
    }    
    if (c == 3)//verificam daca interogarea este de tip 3
    {
        int pozitie2 = 0;
        int pozitie1 = 0;
        int suma = 0;
        for (int i = 1; i <= n; i++)
        {
            if (v[i] == max)
                pozitie2 = i;
        }
        for (int i = n; i >= 1; i--)
        {
            if (v[i] == max)
                pozitie1 = i;
        }
        if (pozitie1 == 0 or pozitie2 == 0)
            out << 0;
        else
        {
            for (int i = pozitie1; i <= pozitie2; i++)
            {
                if (v[i] != max)
                    suma = suma + max - v[i];
            }
            out << suma;
        }
        return 0;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
