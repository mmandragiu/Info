#include <fstream>

using namespace std;
ifstream cin("cifre.in");
ofstream cout("cifre.out");
int CifNr(int n)
{
    int cif=0;
    while(n)
    {
        cif++;
        n=n/10;
    }
    return cif;
}

int main()
{
    int x,y,z,cx,cy,cz,c,d,cifx=0,cify=0,cifz=0,i=0;
    cin>>x>>y>>z;
    cx=x;
    cy=y;
    cz=z;
    cifx=CifNr(x);
    cify=CifNr(y);
    cifz=CifNr(z);
    if(cifx%2==1)
        i=1;
    else
        i=0;
    if(x>=10 and x<=99 and x%11!=0)
    {
        cout<<1<<" ";
    }
    else
    {
        while(x)
        {
            if(x==cx)
            {
                if(cifx%2==0)
                {
                    c=(x/10)%10;
                    d=x%10;
                }
                else
                {
                    c=x%10;
                    d=(x/10)%10;
                }
                x=x/100;
                i+=2;
            }
            if(d==c)
            {
                cout<<0<<" ";
                break;
            }
            else
            {

                if(i%2==1)
                {
                    if(x%10!=c)
                    {
                        cout<<0<<" ";
                        break;
                    }
                }
                else
                {
                    if(x%10!=d)
                    {
                        cout<<0<<" ";
                        break;
                    }
                }
                x=x/10;
                i++;
            }
        }
        if(x==0)
            cout<<1<<" ";
    }
    if(cify%2==1)
        i=1;
    else
        i=0;
    if(y>=10 and y<=99 and y%11!=0)
    {
        cout<<1<<" ";
    }
    else
    {
        while(y)
        {
            if(y==cy)
            {
                if(cify%2==0)
                {
                    c=(y/10)%10;
                    d=y%10;
                }
                else
                {
                    c=y%10;
                    d=(y/10)%10;
                }
                y=y/100;
                i+=2;
            }
            if(d==c)
            {
                cout<<0<<" ";
                break;
            }
            else
            {
                if(i%2==1)
                {
                    if(y%10!=c)
                    {
                        cout<<0<<" ";
                        break;
                    }
                }
                else
                {
                    if(y%10!=d)
                    {
                        cout<<0<<" ";
                        break;
                    }
                }
                y=y/10;
                i++;
            }
        }
        if(y==0)
            cout<<1<<" ";
    }
    if(cifz%2==1)
        i=1;
    else
        i=0;
    if(z>=10 and z<=99 and z%11!=0)
    {
        cout<<1<<" ";
    }
    else
    {

        while(z)
        {
            if(z==cz)
            {
                if(cifz%2==0)
                {
                    c=(z/10)%10;
                    d=z%10;
                }
                else
                {
                    c=z%10;
                    d=(z/10)%10;
                }
                z=z/100;
                i+=2;
            }
            if(d==c)
            {
                cout<<0<<" ";
                break;
            }
            else
            {
                if(i%2==1)
                {
                    if(z%10!=c)
                    {
                        cout<<0<<" ";
                        break;
                    }
                }
                else
                {
                    if(z%10!=d)
                    {
                        cout<<0<<" ";
                        break;
                    }
                }
                z=z/10;
                i++;
            }
        }
        if(z==0 and cz%11!=0)
            cout<<1<<" ";
    }
    return 0;
}
