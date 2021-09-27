#include <fstream>

using namespace std;
ifstream in("abc1.in");
ofstream out("abc1.out");

int main()
{
    int a,b,c,prod=1,prod2=1;
    in>>a>>b>>c;
    a=a%10;
    if(b%10==5 or b%10==6 or b%10==1)
        c=1;
    else
        if(b%10==4 || b%10==9)
        {
            c=c%2;//4 la 3
            if(c==0)
                c=2;
        }
    else
    {
        c=c%4;
        if(c==0)
            c==4;
    }
    b=b%10;//a la(b la c)
    for(int i=1;i<=c;i++)
        b=prod*b;
    prod=prod%10;
    for(int i=1;i<=prod;i++)
        prod2=prod2*a;
    prod2=prod2%10;
    out<<prod2;
    return 0;
}
