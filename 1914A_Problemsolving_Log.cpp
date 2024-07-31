
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,arr[27],val,solved=0;
        cin>>n;
        char prob[n];
        for(int j=0; j<27; j++)
        {
            arr[j]=0;
        }

        for(int j=0; j<n; j++)
        {
            cin>>prob[j];
            val=prob[j]-'A'+1;
            arr[val]+=1;

        }

        for(int j=1; j<=26; j++)
        {
            if(arr[j]>=j)
                solved+=1;


        }
        cout<<solved<<endl;


    }
    return 0;
}
