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

    ll N, A, B;
    cin >> N >> A >> B;

    ll diff = B - A;

    if (diff % 2 == 0)
    {
        cout << diff / 2 << endl;
    }
    else
    {
        cout << min(A - 1, N - B) + 1 + (B - A - 1) / 2;
    }

    return 0;
}
