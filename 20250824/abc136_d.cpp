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

    string S;
    cin >> S;

    ll N = S.size();

    vector<vector<ll>> table(40, vector<ll>(N));

    rep(i, N)
    {
        if (S.at(i) == 'R')
        {
            table.at(0).at(i) = i + 1;
        }
        else
        {
            table.at(0).at(i) = i - 1;
        }
    }

    for (ll i = 1; i < 40; i++)
    {
        rep(j, N)
        {
            table.at(i).at(j) = table.at(i - 1).at(table.at(i - 1).at(j));
        }
    }

    vector<ll> answer(N);

    for (auto e : table.at(39))
    {
        answer.at(e)++;
    }

    for (auto e : answer)
    {
        cout << e << ' ';
    }

    cout << endl;

    return 0;
}
