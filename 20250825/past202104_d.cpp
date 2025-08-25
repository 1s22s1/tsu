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

    ll N, K;
    cin >> N >> K;

    vector<ll> Sn = {0};
    rep(i, N)
    {
        ll a;
        cin >> a;

        Sn.emplace_back(Sn.back() + a);
    }

    for (ll i = K; i <= N; i++)
    {
        cout << Sn.at(i) - Sn.at(i - K) << endl;
    }

    return 0;
}
