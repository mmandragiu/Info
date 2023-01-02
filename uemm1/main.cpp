#include <iostream>
#include <stack>

using namespace std;

const int Nmax=100005;

stack<int> st;
int n,a[Nmax],sol[Nmax];

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sol[i]=-1;
    }
    for(int i=1;i<=n;i++)
    {
        while(!st.empty() && a[st.top()]<a[i])
        {
            sol[st.top()]=a[i];
            st.pop();
        }
        st.push(i);
    }
    for(int i=1;i<=n;i++)
        cout<<sol[i]<<" ";
    return 0;
}
