#include <fstream>
#include <iostream>

using namespace std;
ifstream in("monotona3.00.in");
ofstream out("monotona3.00.out");

int main()
{
    int n,i,a,b;
    bool monotona = true;
    bool maimic = false;
    bool maimare = false;
    in>>n;
    if(n<=2)
    {
        out<<"da";
    }
    else
    {
        in>>a;
        i = 2;
        while(i<=n && monotona)
        {
            in>>b;
            if(b<a){
                if(maimare == true)
                {
                    monotona = false;
                }
                maimic = true;
            }
            if(b>a){
                if(maimic == true)
                {
                    monotona = false;
                }
                maimare = true;
            }
            a=b;
            i++;
        }
        if(monotona) {
            out<< "da";
        }
        else{
            out<< "nu";
        }
    }
    return 0;
}
