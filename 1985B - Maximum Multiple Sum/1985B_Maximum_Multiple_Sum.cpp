
#include<bits/stdc++.h>
using namespace std;

int testcase;


int main()
{
    cin>>testcase;

    for (int i=0; i<testcase; i++)
    {
        int n,x=2,sum=0,max_sum=0,out=0;
        cin>>n;
        while(x<=n)
        {
            sum=0;
            for(int j=1;; j++)
            {
                if(x*j<=n)
                {
                    sum+=(x*j);
                }
                else
                    break;

            }
           // cout<<"sum-"<<sum<<endl;
            if(sum>max_sum)
            {
                max_sum = sum;
                out =x;
            }
            else
            {
                break;
            }


            x++;


        }
        cout<<out<<endl;

    }

    return 0;
}
