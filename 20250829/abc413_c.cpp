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

    ll Q, type, c, x, k;
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

            ll sum = 0;

            while (true)
            {
                auto front = queue.front();

                if (k > front.second)
                {
                    sum += front.first * front.second;
                    k -= front.second;
                    queue.pop();
                }
                else
                {
                    sum += front.first * k;
                    queue.front().second -= k;

                    break;
                }
            }

            cout << sum << endl;

            break;
        }
    }

    return 0;
}
