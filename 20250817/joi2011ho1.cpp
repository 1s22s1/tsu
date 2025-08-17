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

    ll M, N, Q;
    cin >> M >> N >> Q;

    vector<vector<ll>> Jn(M + 1, vector<ll>(N + 1, 0));
    vector<vector<ll>> On(M + 1, vector<ll>(N + 1, 0));
    vector<vector<ll>> In(M + 1, vector<ll>(N + 1, 0));

    for (ll i = 1; i <= M; i++)
    {
        string row;
        cin >> row;
        for (ll j = 1; j <= N; j++)
        {
            if (j == 1)
            {
                Jn.at(i).at(j) = row.at(j - 1) == 'J' ? 1 : 0;
                On.at(i).at(j) = row.at(j - 1) == 'O' ? 1 : 0;
                In.at(i).at(j) = row.at(j - 1) == 'I' ? 1 : 0;
            }
            else
            {
                Jn.at(i).at(j) = row.at(j - 1) == 'J' ? Jn.at(i).at(j - 1) + 1 : Jn.at(i).at(j - 1);
                On.at(i).at(j) = row.at(j - 1) == 'O' ? On.at(i).at(j - 1) + 1 : On.at(i).at(j - 1);
                In.at(i).at(j) = row.at(j - 1) == 'I' ? In.at(i).at(j - 1) + 1 : In.at(i).at(j - 1);
            }
        }
    }

    for (ll i = 2; i <= M; i++)
    {
        for (ll j = 1; j <= N; j++)
        {
            Jn.at(i).at(j) += Jn.at(i - 1).at(j);
            On.at(i).at(j) += On.at(i - 1).at(j);
            In.at(i).at(j) += In.at(i - 1).at(j);
        }
    }

    rep(i, Q)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << Jn.at(c).at(d) + Jn.at(a - 1).at(b - 1) - Jn.at(a - 1).at(d) - Jn.at(c).at(b - 1) << ' ';
        cout << On.at(c).at(d) + On.at(a - 1).at(b - 1) - On.at(a - 1).at(d) - On.at(c).at(b - 1) << ' ';
        cout << In.at(c).at(d) + In.at(a - 1).at(b - 1) - In.at(a - 1).at(d) - In.at(c).at(b - 1) << endl;
    }

    return 0;
}
