#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char c[155],*p;
    int cuv=0;
    cin.getline(c,151);
    p=strtok(c," ");
    while(p!=NULL)
    {
        if(strchr("aeiouAEIOU",p[0])&&strchr("aeiouAEIOU",p[strlen(p)-1]))
            cuv++;
        p=strtok(NULL," ");
    }
    cout<<cuv;
    return 0;
}
