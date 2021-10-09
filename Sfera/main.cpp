#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int r;
    cin>>r;
    cout<<fixed<<setprecision(2)<<(float)(4*(3.14)*r*r)<<" ";
    cout<<fixed<<setprecision(2)<<(float)(4*(3.14)*r*r*r);
    return 0;
}
