
#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
    if (x == 0)
        return y;
    if (y == 0)
        return x;

    return gcd(y, x % y);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int lcm_ = (a * b) / gcd(a, b);
        if(lcm_==b)
        {
            cout<<b*b<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}