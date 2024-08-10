#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt_A = 0, cnt_B = 0, cnt_C = 0, cnt_D = 0;
        for (int i = 0; i < (4 * n); i++)
        {
            if (s[i] == 'A')
                cnt_A++;
            else if (s[i] == 'B')
                cnt_B++;
            else if (s[i] == 'C')
                cnt_C++;
            else if (s[i] == 'D')
                cnt_D++;
        }
        int result = 0;
        if (cnt_A >= n)
            result += n;
        else if (cnt_A < n)
            result += cnt_A;

        if (cnt_B >= n)
            result += n;
        else if (cnt_B < n)
            result += cnt_B;

        if (cnt_C >= n)
            result += n;
        else if (cnt_C < n)
            result += cnt_C;

        if (cnt_D >= n)
            result += n;
        else if (cnt_D < n)
            result += cnt_D;

        cout<<result<<endl;
    }

    return 0;
}
