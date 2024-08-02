#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,cnt=0,start,end;
        char s[n];
        cin>>n;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            if(s[i]=='B')
            {
                cnt++;
                if(!flag)
                {
                    start=i;
                    flag=true;
                }
                end=i;
            }
        }
        cout<<(end-start)+1<<endl;
    }

    return 0;
}