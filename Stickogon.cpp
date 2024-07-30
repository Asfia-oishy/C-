#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cases,s,counter=1,temp,result=0;
    cin>>cases;

    for(int i=0;i<cases;i++)
    {
        cin>>s;
        int len[s];
        for(int j=0;j<s;j++)
        {
           cin>>len[j];
        }
        sort(len,len+s); //2 2 2 2 4 4 4
        temp=len[0];
        for(int j=1;j<s;j++)
        {
            if(len[j]==temp)
            {
                 counter++;
                 if(counter==3)
                 {
                     result++;
                     counter=0;
                 }
            }
            else
            {
                counter=1;
                temp=len[j];
            }
        }
        cout<<result<<endl;
        counter=1;
        result =0;


    }


    return 0;
}
