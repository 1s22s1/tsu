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

    ll answer = 0;

    rep(i, N + 1)
    {
        ll count = count_if(An.begin(), An.end(), [i](int x)
                            { return i <= x; });

        if (i <= count)
        {
            answer = max(answer, i);
        }
    }

    cout << answer << endl;

    return 0;
}
