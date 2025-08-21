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

    ll N, M;
    string S, T;

    cin >> N >> M >> S >> T;

    vector<ll> count(N);
    rep(i, M)
    {
        ll L, R;
        cin >> L >> R;

        count.at(L - 1)++;
        if (R + 1 < N)
        {
            count.at(R)--;
        }
    }

    vector<ll> Sn = {0};
    for (auto a : count)
    {
        Sn.emplace_back(Sn.back() + a);
    }

    rep(i, N)
    {
        if (Sn.at(i + 1) % 2 == 0)
        {
            cout << S.at(i);
        }
        else
        {
            cout << T.at(i);
        }
    }

    cout << endl;

    return 0;
}
