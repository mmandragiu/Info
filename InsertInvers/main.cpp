#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char c[256],*p;
    cin.getline(c,255);
    p=strtok(c," ");
    while(p!=NULL)
    {
        cout<<p<<" ";
        for(int i=strlen(p)-1;i>=0;i--)
            cout<<p[i];
        cout<<" ";
        p=strtok(NULL," ");
    }
    return 0;
}
