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

    vector<ll> S1 = {0}, S2 = {0};
    rep(i, N)
    {
        ll C, P;
        cin >> C >> P;

        if (C == 1)
        {
            S1.emplace_back(S1.back() + P);
            S2.emplace_back(S2.back());
        }
        else
        {
            S1.emplace_back(S1.back());
            S2.emplace_back(S2.back() + P);
        }
    }

    ll Q;
    cin >> Q;
    rep(i, Q)
    {
        ll L, R;
        cin >> L >> R;

        cout << S1.at(R) - S1.at(L - 1) << ' ' << S2.at(R) - S2.at(L - 1) << endl;
    }

    return 0;
}
