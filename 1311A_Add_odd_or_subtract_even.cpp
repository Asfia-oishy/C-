#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>a>>b;
        if(a<b)
        {
            if((b-a)%2!=0)
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
            // else cout<<"3"<<endl;


        }
        else if(a>b)
        {
            if((a-b)%2==0)
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
        }
        else
            cout<<"0"<<endl;
    }
    return 0;
}
