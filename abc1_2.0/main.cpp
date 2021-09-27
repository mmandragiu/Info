#include <fstream>

using namespace std;
ifstream in("abc1.in");
ofstream out("abc1.out");

int main()
{
    int a,b,c,u;
    in>>a>>b>>c;
    if(b%4==0)
    {
        u=a%10;
        out<<(u*u*u*u)%10;
    }
    else if(b%4==1)
        {
            out<<a%10;
        }
    else if(b%4==2)
    {
        u=a%10;
        if(c==1)
            out<<(u*u)%10;
        else
            out<<(u*u*u*u)%10;
    }
    else
    {
        u=a%10;
        if(c%2==1)
            out<<(u*u*u)%10;
        else
            out<<u;
    }
    return 0;
}
