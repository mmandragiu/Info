#include <iostream>

using namespace std;

void afiseazaFamilie(int nrMembri, char *nume[])
{
    for(int i=1; i<= nrMembri; i++){
    cout<< nume[i]<<endl;
    }
}

int main(int argc, char *argv[])
{
    afiseazaFamilie(argc - 1 , argv);
    // cout << "Hello " << argv[1]<< "!"<<endl;
    return 0;
}
