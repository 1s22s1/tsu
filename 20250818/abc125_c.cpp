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

    vector<ll> left = {0}, right = {0};
    rep(i, N)
    {
        left.emplace_back(gcd(left.back(), An.at(i)));
    }

    for (ll i = N - 1; i >= 0; i--)
    {
        right.emplace(right.begin(), gcd(right.front(), An.at(i)));
    }

    ll answer = 0;
    rep(i, N)
    {
        answer = max(answer, gcd(left.at(i), right.at(i + 1)));
    }

    cout
        << answer << endl;

    return 0;
}
