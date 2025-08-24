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

vector<pair<char, long long>> rle(string s)
{
    vector<pair<char, long long>> vec;

    long long i = 0;
    while (i < s.size())
    {
        long long j = i;
        while (j < s.size() && s.at(i) == s.at(j))
        {
            j++;
        }

        vec.push_back({s.at(i), j - i});
        i = j;
    }

    return vec;
}

int main()
{
    init();

    string S;
    ll K;

    cin >> S >> K;

    auto compressed = rle(S);

    if (compressed.size() == 1)
    {
        cout << compressed.front().second * K / 2 << endl;

        return 0;
    }

    if (compressed.front().first == compressed.back().first)
    {
        ll sum = 0;
        for (ll i = 1; i < compressed.size() - 1; i++)
        {
            sum += compressed.at(i).second / 2;
        }

        ll left = compressed.front().second;
        ll right = compressed.back().second;

        cout << sum * K + (left + right) / 2 * (K - 1) + left / 2 + right / 2 << endl;
    }
    else
    {
        ll sum = 0;
        for (auto [key, value] : compressed)
        {
            sum += value / 2;
        }

        cout << sum * K << endl;
    }

    return 0;
}
