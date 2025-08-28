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

    map<ll, ll> frequency;
    rep(i, N)
    {
        frequency[i + An.at(i)]++;
    }

    ll answer = 0;
    rep(j, N)
    {
        answer += frequency[j - An.at(j)];
    }

    cout << answer << endl;

    return 0;
}
