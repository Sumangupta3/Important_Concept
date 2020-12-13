#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    long long int testcases;
    cin >> testcases;
    while (testcases--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> c0, c1;
        ll c = 1;
        vector<ll> ans(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (c1.size() != 0)
                {
                    ans[i] = c1[c1.size() - 1];
                    c1.pop_back();
                    c0.push_back(ans[i]);
                }
                else
                {
                    ans[i] = c;
                    c0.push_back(c);
                    c++;
                }
            }
            else
            {
                if (c0.size() != 0)
                {
                    ans[i] = c0[c0.size() - 1];
                    c0.pop_back();
                    c1.push_back(ans[i]);
                }
                else
                {
                    ans[i] = c;
                    c1.push_back(c);
                    c++;
                }
            }
        }
        cout << c - 1 << endl;
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }

    return 0;
}