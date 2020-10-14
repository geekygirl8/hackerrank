#include <bits/stdc++.h>
using namespace std;
  int main() 
{
    int len1,i,len2,j;
    cin>>len1;       //size of array strings
    string s[len1];
    for(i=0;i<len1;i++)
    {
        cin>>s[i];
    }
    cin>>len2;     //size of queries array
    string t[len2];
    for(i=0;i<len2;i++)
    {
        cin>>t[i];
    }
    for(i=0;i<len2;i++)
    {
        int flag=0;
        for(j=0;j<len1;j++)
        {
            if(t[i]==s[j])
                flag++;
        }
        cout<<flag<<"\n";
    }
    return 0;
}
    