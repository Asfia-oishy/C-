#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin>>x>>k;
        for(int i=0;;i++)
        {
            string str = to_string(x);
            int sum =0;
            for(int j=0;j<str.size();j++)
            {
                sum+=(str[j]-'0');
            }
            if(sum%k==0)
            {
                cout<<x<<endl;
                break;
            }
            x++;
        }
    }
    return 0;
}