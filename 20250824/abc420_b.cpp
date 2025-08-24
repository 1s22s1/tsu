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

    vector<ll> count(N);
    vector<vector<char>> votes;
    rep(i, N)
    {
        string s;
        cin >> s;

        vector<char> row;
        for (char c : s)
        {
            row.emplace_back(c);
        }

        votes.emplace_back(row);
    }

    ll nankai = 0;
    rep(i, M)
    {
        ll x = 0, y = 0;
        rep(j, N)
        {
            if (votes.at(j).at(i) == '0')
            {
                x++;
            }
            else
            {
                y++;
            }
        }

        if (x == 0 || y == 0)
        {
            rep(i, N)
            {
                count.at(i)++;
            }
        }
        else if (x < y)
        {
            rep(i, N)
            {
                if (votes.at(i).at(nankai) == '0')
                {
                    count.at(i)++;
                }
            }
        }
        else
        {
            rep(i, N)
            {
                if (votes.at(i).at(nankai) == '1')
                {
                    count.at(i)++;
                }
            }
        }

        nankai++;
    }

    auto max_it = max_element(count.begin(), count.end());

    rep(i, N)
    {
        if (count.at(i) == *max_it)
        {
            cout << i + 1 << ' ';
        }
    }

    cout << endl;

    return 0;
}
