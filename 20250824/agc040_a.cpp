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

    vector<ll> numbers(N + 1);

    rep(i, N)
    {
        if (S.at(i) == '<')
        {
            numbers.at(i + 1) = numbers.at(i) + 1;
        }
    }

    for (ll i = N - 1; i >= 0; i--)
    {
        if (S.at(i) == '>')
        {
            numbers.at(i) = max(numbers.at(i + 1) + 1, numbers.at(i));
        }
    }

    cout << accumulate(numbers.begin(), numbers.end(), 0LL) << endl;

    return 0;
}
