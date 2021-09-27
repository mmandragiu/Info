#include <iostream>
#include <algorithm>

using namespace std;

void sortareVector(int v[], int n)
{
    for(int i =0; i < n-1; i++)
        for(int j = i+1; j< n; j++)
            if(v[j]<v[i])
            {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }

}

int main()
{
    int v[10]={0};
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>v[i];

    sort(v, v+n);


    for(int i = 0; i< n; i++)
        cout<<v[i]<<" ";
    return 0;
}
