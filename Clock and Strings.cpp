#include<bits/stdc++.h>
using namespace std;
//diff even hole line soja ,odd hole baka
//1-12 line kore likhsi.evabe intersect kore kina bujha jacche

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {

        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int tmp;
        if(b<a)
        {
            tmp=a;
            a=b;
            b=tmp;
        }

        if(d<c)
        {
            tmp=c;
            c=d;
            d=tmp;
        }



        if((c>a && d<b) || (c<a && d>b) || c>b || d<a)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }


    return 0;
}
