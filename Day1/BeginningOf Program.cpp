#include<iostream>
#include<bits/stdc++.h>
# include<string>

using namespace std;
int main(void)
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s.length()==10)
        {
            sort(s.begin(), s.end());

            if(s.compare("dehllloorw") == 0)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }
    return 0;
}
