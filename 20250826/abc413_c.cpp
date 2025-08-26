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

    ll Q, c, x, k, type;
    cin >> Q;

    queue<pair<ll, ll>> queue;

    rep(i, Q)
    {
        cin >> type;

        switch (type)
        {
        case 1:
            cin >> c >> x;
            queue.emplace(x, c);

            break;

        case 2:
            cin >> k;

            ll answer = 0;

            while (true)
            {
                auto top = queue.front();

                if (k <= top.second)
                {
                    answer += k * top.first;
                    queue.front().second = top.second - k;

                    break;
                }
                else
                {
                    answer += top.first * top.second;
                    k -= top.second;
                    queue.pop();
                }
            }

            cout << answer << endl;

            break;
        }
    }

    return 0;
}
