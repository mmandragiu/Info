#include <iostream>

using namespace std;

int main()
{
    int n,oglindit=0,sumdiv=0;
    cin>>n;
    while(n!=0)
    {
        oglindit=oglindit*10+n%10;
        n=n/10;
    }

    for(int i=1;i*i<=oglindit;i++)
    {
        if(oglindit%i==0)
        {
            sumdiv++;
            if(i*i<oglindit)
            {
                sumdiv++;
            }
        }

    }
    cout<<sumdiv;
    return 0;
}
