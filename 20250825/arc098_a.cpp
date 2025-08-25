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
    string S;

    cin >> N >> S;

    vector<ll> Wn = {0}, En = {0};
    for (auto c : S)
    {
        if (c == 'W')
        {
            Wn.emplace_back(Wn.back() + 1);
            En.emplace_back(En.back());
        }
        else
        {
            Wn.emplace_back(Wn.back());
            En.emplace_back(En.back() + 1);
        }
    }

    ll answer = N;

    rep(i, N)
    {
        answer = min(answer, En.back() - En.at(i + 1) + Wn.at(i));
    }

    cout << answer << endl;

    return 0;
}
