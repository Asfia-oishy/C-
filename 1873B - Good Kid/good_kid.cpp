#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n], product=1;
        int min_= 1000000;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<min_)
            {
                min_=arr[i];
            }
        }
        bool flag=false;
        for(int i=0;i<n;i++)
        {           
            if(arr[i]!=min_ || flag)
            {
                product*=arr[i];
            }
            else
            {
                product*=(min_+1);
                flag = true;
            }
        }

        cout<<product<<endl;
    }
    return 0;
}