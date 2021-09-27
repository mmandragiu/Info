#include <iostream>
#include <fstream>

using namespace std;
ifstream in ("topaila.in");
ofstream out("topaila.out");

int main()
{
    int T,A,K,B,a=0,s=0;
    in>>T;
    for(int i=1;i<=T;i++)
    {
        in>>K>>A>>B;
        a=A-B;
        s=K*(K+1)/2+a;
        if(s>=0 && s%2==0)
        {
            out<<1;
        }
        else
        {
            out<<0;
        }
    }

    return 0;
}
