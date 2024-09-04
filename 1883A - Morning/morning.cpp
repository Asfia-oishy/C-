#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int seconds = 0;
        string pin;
        cin >> pin;

        int curr = 1;

        for (int i = 0; i < pin.size(); i++)
        {
            int val = pin[i]-'0';
            if (val != 0)
            {
                if (curr == 0)
                {
                    seconds += (9 - val + 2);
                }
                else
                {
                    seconds += (abs(val - curr) + 1);
                }
                curr = val;
            }
            else
            {
                if (curr == 0)
                {
                    seconds += 1;
                }
                else
                {
                    seconds += ((9 - curr) + 2);
                }
                curr = 0;
            }
        }
        cout << seconds << endl;
    }
    return 0;
}