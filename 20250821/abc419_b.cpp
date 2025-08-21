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

    priority_queue<int, vector<int>, greater<int>> pq;

    ll Q;
    cin >> Q;

    rep(i, Q)
    {
        ll type, x;
        cin >> type;

        switch (type)
        {
        case 1:
            cin >> x;
            pq.emplace(x);

            break;

        case 2:
            cout << pq.top() << endl;
            pq.pop();

            break;
        }
    }

    return 0;
}
