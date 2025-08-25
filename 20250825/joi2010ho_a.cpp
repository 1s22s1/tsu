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

    ll n, m;
    cin >> n >> m;

    vector<ll> Sn = {0};
    rep(i, n - 1)
    {
        ll distance;
        cin >> distance;
        Sn.emplace_back(Sn.back() + distance);
    }

    ll current = 0, answer = 0;
    rep(i, m)
    {
        ll next;
        cin >> next;

        answer = (answer + abs(Sn.at(current + next) - Sn.at(current))) % 100000;
        current += next;
    }

    cout << answer << endl;

    return 0;
}
