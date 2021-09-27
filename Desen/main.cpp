#include <fstream>

using namespace std;
ifstream in("desen.in");
ofstream out("desen.out");

int main()
{
    long long int C,X=1,K,v[100],elementeVector=0;
    in>>C>>K;
    if(C==1)
    {
        while(X<K/2)
        {
            X=X*2;
        }
        out<<X<<" "<<X*2-1;
    }
    if(C==2)
    {
        while(K/2!=0)
        {
            K=K/2;
            v[elementeVector]=K;
            elementeVector++;
        }
    }
    for(int i=elementeVector-1;i>=0;i--)
    {
        out<<v[i]<<" ";
    }
    return 0;
}
