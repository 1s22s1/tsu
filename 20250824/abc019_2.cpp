#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

int main()
{
    init();

    string s;
    cin >> s;

    ll N = s.size();

    ll i = 0;
    while (i < N)
    {
        ll j = i;
        while (j < N && s.at(i) == s.at(j))
        {
            j++;
        }

        cout << s.at(i) << j - i;
        i = j;
    }

    cout << endl;

    return 0;
}
