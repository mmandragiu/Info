#include <iostream>

using namespace std;

int main()
{
    int n, x, f[1000]={0}, a = -1, b = -1, v = 0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
		cin>>x;
        if(x<=999)
            f[x]++;
    }
    for(int i=999;i>=100;i--)
    {
        if(v<2 && f[i]==0)
        {
            if(a==-1)
                a=i;
            else
                if(b==-1)
                	b=i;
            v++;
        }
    }
    if(v<2)
        cout<<"NU EXISTA";
    else
        cout<<b<<" "<<a;
    return 0;
}
