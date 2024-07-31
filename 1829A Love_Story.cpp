#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    char ara[]="codeforces";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int c=0;
        char s[10];
        for(int j=0;j<10;j++)
        {
            cin>>s[j];
        }

         for(int j=0;j<10;j++)
        {
            if(s[j]!=ara[j])
                c++;
        }
        cout<<c<<endl;
    }




    return 0;
}
