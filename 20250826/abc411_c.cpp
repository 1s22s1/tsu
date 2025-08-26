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

    vector<ll> line(N + 2);
    ll answer = 0;

    rep(i, Q)
    {
        ll a;
        cin >> a;

        if (line.at(a - 1) == 0 && line.at(a) == 0 && line.at(a + 1) == 0)
        {
            answer++;
        }

        if (line.at(a - 1) == 0 && line.at(a) == 1 && line.at(a + 1) == 0)
        {
            answer--;
        }

        if (line.at(a - 1) == 1 && line.at(a) == 0 && line.at(a + 1) == 1)
        {
            answer--;
        }

        if (line.at(a - 1) == 1 && line.at(a) == 1 && line.at(a + 1) == 1)
        {
            answer++;
        }

        line.at(a) = line.at(a) == 0 ? 1 : 0;

        cout << answer << endl;
    }

    return 0;
}
