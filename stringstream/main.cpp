#include <iostream>
#include <cmath>

using namespace std;

double a[100][100],n,sum1,sum2,dif;

int main()
{
    cin>>n;
    for(double i=0;i<n;i++)
        for(double j=0;j<n;j++)
            cin>>a[i][j];
    for(double i=0;i<n;i++)
        sum1+=a[i][i];
    for(double i=n-1;i>=0;i--)
        sum2+=a[i][n-1-i];
    dif=sum1-sum2;
    cout<<abs(dif);
    return 0;
}
