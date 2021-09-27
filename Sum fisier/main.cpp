#include <iostream>
#include <fstream>

using namespace std;

int main()
{int x,y,sum;
    ifstream myfile;
    ofstream myoutfile;
    myfile.open("sum.in");
    myoutfile.open("sum.out");
    myfile>>x>>y;
    sum=x+y;
    myoutfile<<sum;
    return 0;

}
