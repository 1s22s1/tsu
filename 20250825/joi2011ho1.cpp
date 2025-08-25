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

    ll N, M, Q;
    cin >> N >> M >> Q;

    vector<vector<ll>> jdp(N + 1, vector<ll>(M + 1));
    vector<vector<ll>> odp(N + 1, vector<ll>(M + 1));
    vector<vector<ll>> idp(N + 1, vector<ll>(M + 1));

    vector<vector<char>> map;
    rep(i, N)
    {
        vector<char> row;
        string s;
        cin >> s;
        for (auto c : s)
        {
            row.emplace_back(c);
        }

        map.emplace_back(row);
    }

    for (ll i = 1; i <= N; i++)
    {
        for (ll j = 1; j <= M; j++)
        {
            // 左端の場合
            if (j == 1)
            {
                jdp.at(i).at(j) = map.at(i - 1).at(j - 1) == 'J' ? 1 : 0;
                odp.at(i).at(j) = map.at(i - 1).at(j - 1) == 'O' ? 1 : 0;
                idp.at(i).at(j) = map.at(i - 1).at(j - 1) == 'I' ? 1 : 0;
            }
            else
            {
                jdp.at(i).at(j) = map.at(i - 1).at(j - 1) == 'J' ? jdp.at(i).at(j - 1) + 1 : jdp.at(i).at(j - 1);
                odp.at(i).at(j) = map.at(i - 1).at(j - 1) == 'O' ? odp.at(i).at(j - 1) + 1 : odp.at(i).at(j - 1);
                idp.at(i).at(j) = map.at(i - 1).at(j - 1) == 'I' ? idp.at(i).at(j - 1) + 1 : idp.at(i).at(j - 1);
            }
        }
    }

    for (ll i = 2; i <= N; i++)
    {
        for (ll j = 1; j <= M; j++)
        {
            jdp.at(i).at(j) += jdp.at(i - 1).at(j);
            odp.at(i).at(j) += odp.at(i - 1).at(j);
            idp.at(i).at(j) += idp.at(i - 1).at(j);
        }
    }

    rep(i, Q)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << jdp.at(c).at(d) + jdp.at(a - 1).at(b - 1) - jdp.at(a - 1).at(d) - jdp.at(c).at(b - 1) << ' ';
        cout << odp.at(c).at(d) + odp.at(a - 1).at(b - 1) - odp.at(a - 1).at(d) - odp.at(c).at(b - 1) << ' ';
        cout << idp.at(c).at(d) + idp.at(a - 1).at(b - 1) - idp.at(a - 1).at(d) - idp.at(c).at(b - 1) << endl;
    }

    return 0;
}
