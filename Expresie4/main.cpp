#include <iostream>

using namespace std;
int main()
{
    int n,sum=0,copien;
    cin>>n;
    copien=n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i*copien;
        copien--;
    }
    cout<<"Rezultatul este "<<sum;
    return 0;
}
