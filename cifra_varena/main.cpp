#include <fstream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    ifstream in("cifra.in");
    ofstream out("cifra.out");
    int n, c;
    bool found=false;
    in >> n >> c;
    if(c%9!=0)
        out<<c<<" ";
    in.close();
    while(!found)
    {
        if(n%9==c%9)
        {
            found=true;
            break;
        }
        else
            n--;
    }
    for(int i=0;i<n/9;i++)
        out<<(i+1)*9+c%9<<" ";
    out.close();
    return 0;
}
