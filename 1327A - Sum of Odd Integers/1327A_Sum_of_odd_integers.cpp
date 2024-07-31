#include<bits/stdc++.h>
using namespace std;
int main()
{
    long  long int n,k,cases,m;
    cin>>cases;
    for(int i=0; i<cases; i++)
    {

        cin>>n>>k;
        m=(k-1)*(k-1);
        if((n-m)<=0 || (n-m)%2==0 || (n-m)<(1+(k-1)*2))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
