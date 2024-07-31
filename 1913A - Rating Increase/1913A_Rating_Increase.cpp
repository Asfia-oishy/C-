#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string ab;
        cin>>ab;
        int len = ab.size();
        for(int i=0;i<len;i++)
        {
            if(ab[i]>=48 && ab[i]<=57)
            {
                
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }
    

    return 0;
}