#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char sir[100], * p,b[101][101],cuv_ok[101][101];
    bool exista = false;
    int n=0,cuv_bune=0;
    cin.getline(sir, 100);
    p = strtok(sir, " ");
    while (p != NULL)
    {
        /*if (strstr(p, "DO") || strstr(p, "RE") || strstr(p, "MI") || strstr(p, "FA") || strstr(p, "SOL") || strstr(p, "LA") || strstr(p, "SI"))
            cout << p << endl, exista = true;*/
        strcpy(b[n],p),n++;
        p=strtok(NULL," ");
    }
    for(int i=0;i<n;i++)
    {
        exista=false;
        if(strstr(b[i],"DO"))
            exista=true;
        if(strstr(b[i],"RE"))
            exista=true;
        if(strstr(b[i],"MI"))
            exista=true;
        if(strstr(b[i],"FA"))
            exista=true;
        if(strstr(b[i],"SOL"))
            exista=true;
        if(strstr(b[i],"LA"))
            exista=true;
        if(strstr(b[i],"SI"))
            exista=true;
        if(exista==true)
            strcpy(cuv_ok[cuv_bune],b[i]),cuv_bune++;
    }
    if(!exista)
        cout<<"nu exista";
    for(int i=0;i<cuv_bune;i++)
    {
        cout<<cuv_bune[i]<<endl;
    }
    return 0;
}
