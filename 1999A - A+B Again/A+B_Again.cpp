#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;

        int a=num%10;
        num=num/10;
        int b=num%10;
        cout<<a+b<<endl;
    }
    return 0;
}