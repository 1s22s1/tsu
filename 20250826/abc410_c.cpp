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

    ll offset = 0;

    vector<ll> An;
    rep(i, N)
    {
        An.emplace_back(i + 1);
    }

    ll type, p, x, k;

    rep(i, Q)
    {
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
