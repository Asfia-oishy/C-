#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        cout<<"YES"<<endl;
        char ch='A';

        for(int i=0;i<n;i++)
        {
            if(i!=0 && i%2==0)
            {
                ch+=1;
            }
            cout<<ch;
            
        }
        cout<<endl;
    }
    return 0;
}