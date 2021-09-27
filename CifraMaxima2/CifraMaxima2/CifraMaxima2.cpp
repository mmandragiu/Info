#include <iostream>
using namespace std;

int main()
{
    int n,cifmax=-1,aparitii=0,ultimcif;
    cin >> n;
    if (n == 0)
    {
        cout << 0<<" "<<1;
        return 0;
    }
    while (n != 0)
    {
       ultimcif = n % 10;
       if (ultimcif > cifmax)
       {
            cifmax = ultimcif;
            aparitii = 1;
       }
       else
       {
            if (ultimcif == cifmax)
                aparitii++;
       }
        n = n / 10;
     }
    cout << cifmax << " " << aparitii;
    return 0;
}