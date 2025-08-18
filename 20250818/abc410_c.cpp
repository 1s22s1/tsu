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

    ll N, Q;
    cin >> N >> Q;

    vector<ll> An;
    for (ll i = 1; i <= N; i++)
    {
        An.emplace_back(i);
    }

    ll offset = 0, p, x, k;

    rep(i, Q)
    {
        ll type;
        cin >> type;

        switch (type)
        {
        case 1:
            cin >> p >> x;
            p--;
            An.at((p + offset) % N) = x;

            break;

        case 2:
            cin >> p;
            p--;
            cout << An.at((p + offset) % N) << endl;

            break;
        case 3:
            cin >> k;
            offset = (offset + k) % N;

            break;
        }
    }

    return 0;
}
