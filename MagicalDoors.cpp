#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    // TEST CASES
    while (t--)
    {
        string s;
        cin>>s;

        int l;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                l=i;
                break;
            }    
        }
    
    int count=1;

    string s1;
    s1=s.substr(3);
    
    if(s1.size()==0)
        cout<<0<<endl;

    else
    {
        for(int i=0;i<s1.size()-1;i++)
        {
            if(s[i]!=s[i+1])
                count++;
        }
        cout<<count<<endl;
    }

    }
    
}
