#include <iostream>
#include <string>

using namespace std;
int main() {

    int test,i,len;
    cin >> test;
    string s ;

    while(test--)
    {
        cin >> s ;
        int ar[26]={0};
        len = s.length();

        for(i=0; i<len/2; i++)
            ar[s[i]-'a']++;

        if(len&1)
            i++;

        for(; i<len; i++)
            ar[s[i]-'a']--;

        for(i=0; i<26; i++)
            if(ar[i]!=0)
                break;

        if(i==26)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

}
