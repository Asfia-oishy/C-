#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s = to_string(n);

        if (s[0] != '1' || s[1] != '0' || s.size() < 3)
        {
            cout << "NO" << endl;
            continue;
        }
        reverse(s.begin(), s.end());
        s.pop_back();
        s.pop_back();
        reverse(s.begin(), s.end()); // trim 10

        if (s[0] == '0' || (s[0] == '1' && s.size() == 1))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}