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

    ll N;
    cin >> N;

    vector<ll> An;
    rep(i, N)
    {
        ll a;
        cin >> a;

        An.emplace_back(a);
    }

    rep(i, N)
    {
        ll answer = 1;
        ll current = i;

        while (true)
        {
            if (i == An.at(current) - 1)
            {
                break;
            }

            current = An.at(current) - 1;
            answer++;
        }

        cout << answer << ' ';
    }

    cout << endl;

    return 0;
}
