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

    vector<ll> Sn = {0};
    rep(i, N)
    {
        ll a;
        cin >> a;

        Sn.emplace_back(Sn.back() + a);
    }

    map<ll, ll> frequency;
    for (auto v : Sn)
    {
        frequency[v]++;
    }

    ll answer = 0;
    for (const auto [key, value] : frequency)
    {
        answer += value * (value - 1) / 2;
    }

    cout << answer << endl;

    return 0;
}
