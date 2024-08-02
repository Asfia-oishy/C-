#include <bits/stdc++.h>
using namespace std;

bool is_vowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'y')
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<char> s(n);

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int hold = 0, l;
    for (int j = 0; j < n; j++)
    {

        for (int k = 0; k < n; k++)
        {
            if (s[k] == 'A')
            {
                l++;
            }
            else if (!is_vowel(s[k]))
            {
                hold = 0;
            }

            else if (hold == 0 && is_vowel(s[k]) == true)
            {
                hold = 1;
                l = k;
            }

            else if (hold == 1 && is_vowel(s[k]) && k == l + 1)
            {
                s[k] = 'A';
                hold = 0;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] != 'A')
            cout << s[i];
    }

    cout << endl;
    return 0;
}