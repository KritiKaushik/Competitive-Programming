#include<iostream>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i;
        for (i=0;i<n;i++)
            cin>>a[i];
        int hi=INT_MAX,ans=0;
        for (i=0;i<n;i++)
        {
            if (a[i]<=hi)
            {
                hi=a[i];
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
