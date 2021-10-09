#include <iostream>

using namespace std;

int main()
{
    int n,a[100002],difmax=-2000000001;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(a[i]-a[j]>difmax)
                difmax=a[i]-a[j];
        }
    }
    cout<<difmax;
    return 0;
}
