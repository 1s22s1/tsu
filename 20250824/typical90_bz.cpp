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
    cin >> N >> M;

    vector<vector<ll>> g(N);
    rep(i, M)
    {
        ll A, B;
        cin >> A >> B;
        A--, B--;

        g.at(A).emplace_back(B);
        g.at(B).emplace_back(A);
    }

    ll answer = 0;
    rep(i, N)
    {
        ll count = count_if(g.at(i).begin(), g.at(i).end(), [i](int x)
                            { return i > x; });
        if (count == 1)
        {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}
