#include<bits/stdc++.h>
using namespace std;

int main()
{

    int cases,a,b,c;
    cin>>cases;

    for(int i=0;i<cases;i++)
    {
        cin>>a>>b>>c;
        if(a<b && b<c)
            cout<<"STAIR"<<endl;
        else if(a<b && b>c)
            cout<<"PEAK"<<endl;
        else
            cout<<"NONE"<<endl;
    }
    return 0;
}
