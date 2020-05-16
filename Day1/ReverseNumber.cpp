#include <iostream>
using namespace std;
int main()
{
    int t,a,i;
    cin>>t;
    while(t--)
    {
        a=0;
        cin>>i;
        while(i)
        {
            a=a*10+(i%10);
            i/=10;
        }
        cout<<a<<endl;
    }
}
