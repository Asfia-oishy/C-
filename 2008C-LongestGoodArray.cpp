#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,val;
        cin>>l>>r;
        int gap=1;
        int cnt = 1;

        while(1)
        {
            val = l+gap;
            if(val<=r)
            {
                cnt++;
                gap++;
                l=val;
            }
            else
            break;
            
        }
        cout<<cnt<<endl;
    }


    return 0;
}