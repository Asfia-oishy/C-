#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,police=0,untreated=0;
    cin>>n;
    int events[n];
    for(int i=0; i<n; i++)
    {
        cin>>events[i];
    }

    for(int i=0; i<n; i++)
    {

        if(events[i]<0 && police==0)
        {
            untreated+=1;

        }
        else
        {
            police+=events[i];

        }


    }

    cout<<untreated;

    return 0;
}
