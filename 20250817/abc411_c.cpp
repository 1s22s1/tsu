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

    vector<ll> row(N + 2, 0);
    ll answer = 0;

    rep(i, Q)
    {
        ll a;
        cin >> a;

        if (row.at(a - 1) == 0 && row.at(a) == 0 && row.at(a + 1) == 0)
        {
            answer++;
        }

        if (row.at(a - 1) == 0 && row.at(a) == 1 && row.at(a + 1) == 0)
        {
            answer--;
        }

        if (row.at(a - 1) == 1 && row.at(a) == 0 && row.at(a + 1) == 1)
        {
            answer--;
        }

        if (row.at(a - 1) == 1 && row.at(a) == 1 && row.at(a + 1) == 1)
        {
            answer++;
        }

        row.at(a) = row.at(a) == 0 ? 1 : 0;

        cout << answer << endl;
    }

    return 0;
}
