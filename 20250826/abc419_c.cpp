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

    vector<ll> Rn, Cn;
    rep(i, N)
    {
        ll R, C;
        cin >> R >> C;
        Rn.emplace_back(R);
        Cn.emplace_back(C);
    }

    auto [r_min, r_max] = minmax_element(Rn.begin(), Rn.end());
    auto [c_min, c_max] = minmax_element(Cn.begin(), Cn.end());

    ll answer = max((*r_max - *r_min + 1) / 2, (*c_max - *c_min + 1) / 2);

    cout << answer << endl;

    return 0;
}
