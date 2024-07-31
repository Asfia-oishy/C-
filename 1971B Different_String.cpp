#include<bits/stdc++.h>
using namespace std;

int testcase;


int main()
{
    cin>>testcase;
    for (int i=0; i<testcase; i++)
    {
        bool flag=false;
        string s,temp,temp2;

        cin>>s;
        int len = s.size(),index;
        for(int j=0; j<len-1; j++)
        {
            if(s[j]!=s[j+1])
            {

                flag=true;
                index=j;
              //  cout<<index<<endl;
                break;
            }

        }
        if (flag)
        {
            cout<<"YES"<<endl;
            temp = s[index];
            temp2 = s[index+1];
            //cout<<temp;
            s.replace(index,1,temp2);
            s.replace(index+1,1,temp);
            cout<<s<<endl;

        }
        else
        {

            cout<<"NO"<<endl;
        }
    }
    return 0;
}
