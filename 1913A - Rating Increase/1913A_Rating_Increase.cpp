#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int x = 1; x <= t; x++)
    {
        string ab;
        vector<char> a, b;
        a.clear();
        b.clear();
        cin >> ab;
        bool flag = true;
        int len = ab.size(), br = -1;
        for (int i = 0; i < len - 1; i++)
        {

            if (ab[i + 1] != '0')
            {
                br = i;
                break;
            }
        }
        if (br != -1)
        {
            for (int j = 0; j < len; j++)
            {
                if (j <= br)
                {
                    a.push_back(ab[j]);
                }

                else
                    b.push_back(ab[j]);
            }
        }

        if (a.size() == b.size())
        {
            int c = 0;
            for (int j = 0; j < a.size(); j++)
            {
                if (a[j] < b[j])
                {
                    break;
                }
                else if (a[j] == b[j])
                    c++;
                else
                {
                    flag = false;
                    break;
                }
            }
            if (c == a.size())
                flag = false;
        }
        else if (a.size() > b.size())
            flag = false;

        if (flag && br != -1)
        {
            for (int j = 0; j < a.size(); j++)
                cout << a[j];
            cout << " ";
            for (int j = 0; j < b.size(); j++)
                cout << b[j];
            cout << endl;
        }
        else
            cout << -1 << endl;
    }

    return 0;
}