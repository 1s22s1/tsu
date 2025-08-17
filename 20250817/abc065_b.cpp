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

    ll N;
    cin >> N;
    vector<ll> An;
    rep(i, N)
    {
        ll a;
        cin >> a;
        a--;
        An.emplace_back(a);
    }

    bool ok = false;
    ll count = 0;
    ll current = 0;

    rep(i, 10e5)
    {
        count++;
        if (An.at(current) == 1)
        {
            ok = true;
            break;
        }

        current = An.at(current);
    }

    if (ok)
    {
        cout << count << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
