#include<iostream>
using namespace std;
int main()
{
    int k,i;
    string s;
    cin>>s;
    cin>>k;
    for (i=0;i<s.length();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i]=char(((int(s[i])+k-65)%26) +65);
        else if(s[i]>='a' && s[i]<='z')
            s[i]=char(((int(s[i])+k-97)%26) +97);
        else if(s[i]>='0' && s[i]<='9')
            s[i]=(((int(s[i])+k-48)%10)+48);
        else
            s[i]=s[i];
    }
    cout<<s;
    return 0;
}
