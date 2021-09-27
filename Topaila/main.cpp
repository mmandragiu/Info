#include <iostream>
#include <fstream>

using namespace std;
ifstream in ("topaila.in");
ofstream out("topaila.out");

int main()
{
    int T,A,K,B,a=0,s1=0,s2=0;
    in>>T;
    for(int i=1;i<=T;i++)
    {
        in>>K>>A>>B;
        a=A-B;
        s1=K*(K+1)/2+a;
        s2=a-K*(K+1)/2;
        if(s1>0 && s1%2==0 &&s2 < 0 && s2%2 == 0)
        {
            out<<1<<'\n';
        }
        else
        {
            out<<0<<'\n';
        }
    }

    return 0;
}
