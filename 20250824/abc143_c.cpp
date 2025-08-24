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

    ll answer = 0;

    ll i = 0;
    while (i < N)
    {
        ll j = i;
        while (j < N && S.at(i) == S.at(j))
        {
            j++;
        }

        answer++;
        i = j;
    }

    cout << answer << endl;

    return 0;
}
