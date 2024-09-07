#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total_drink = k * l;
    int total_lime_slice = c * d;
    if ((nl * n) > total_drink || (np * n) > p || total_lime_slice < n)
        cout << 0 << endl;
    else
    {
        int min_d = min(total_drink/nl,total_lime_slice);
        min_d = min(p/np,min_d);
        cout<<min_d/n<<endl;

    }

    return 0;
}