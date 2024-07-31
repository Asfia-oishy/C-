#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t,len,i,j,k,b,x;
    char s[104];
    cin>>t;
    for( i=0; i<t; i++)
    {
        b=0;
        cin>>s;
        len=strlen(s);
        for( j=0; j<len; j++)
        {
            if(s[j]=='1')
            {
                k=j;
            }

        }
        for( j=0; j<len; j++)
        {
            if(s[j]=='1')
            {

                for( x=j; x<k; x++)
                {
                    if(s[x]=='0')
                        b++;
                }
                break;
            }
        }
        cout<<b<<endl;


    }
    return 0;

}
