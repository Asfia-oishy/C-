
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a=0,b=0;
        string value;
        cin>>value;
        for(int j=0;j<5;j++)
        {
            if(value[j]=='A')
                a+=1;
            else
                b+=1;

        }
        char result=a>b?'A':'B';
        cout<<result<<endl;
    }
    return 0;
}
