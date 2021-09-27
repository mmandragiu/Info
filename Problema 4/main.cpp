#include <iostream>

using namespace std;

int main()
{int n;
 cin>>n;
 cout<<((n/10000)%10)*1000+((n/1000)%10)*100+((n/100)%10)*10+(n/10)%10;

    return 0;
}
