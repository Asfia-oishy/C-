#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a,b,cases,z;
    cin>>cases;
    for(int i=0; i<cases; i++)
    {
        cin>>x>>y>>a>>b;
        z=(y-x)%(a+b);
        if(z==0)
            cout<<(y-x)/(a+b)<<endl;
        else
            cout<<"-1"<<endl;

    }
    return 0;
}



