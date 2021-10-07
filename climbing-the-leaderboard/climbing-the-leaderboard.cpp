#include <bits/stdc++.h>

using namespace std;
int main()
{
    long int n,m,a;cin>>n;
    stack<long int>rank;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(rank.empty()||rank.top()!=a)     rank.push(a);
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a;
        while(!rank.empty()&&a>=rank.top())        rank.pop();
        cout<<rank.size()+1<<endl;
    }
    return 0;
}
