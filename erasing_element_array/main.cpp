#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector <int> v;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>v[i];
    v.erase(v.begin()+4);
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
    return 0;
}
