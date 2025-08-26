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

    map<ll, ll> count;
    rep(i, N)
    {
        count[i + An.at(i)]++;
    }

    ll answer = 0;
    for (ll i = N - 1; i >= 0; i--)
    {
        answer += count[i - An.at(i)];
    }

    cout << answer << endl;
}
