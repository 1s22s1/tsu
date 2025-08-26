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

    vector<ll> An(N);

    rep(i, M)
    {
        ll L, R;
        cin >> L >> R;

        An.at(L - 1)++;

        if (R < N)
        {
            An.at(R)--;
        }
    }

    vector<ll> Sn = {0};
    for (auto a : An)
    {
        Sn.emplace_back(Sn.back() + a);
    }

    for (ll i = 1; i <= N; i++)
    {
        if (Sn.at(i) % 2 == 0)
        {
            cout << S.at(i - 1);
        }
        else
        {
            cout << T.at(i - 1);
        }
    }

    cout << endl;

    return 0;
}
