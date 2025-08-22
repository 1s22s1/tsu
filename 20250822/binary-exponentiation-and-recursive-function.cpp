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

// cf. https://kyopro.nakaken88.com/textbook/binary-exponentiation-and-recursive-function/
int main()
{
    init();

    ll A, N;
    ll p = 1e9 + 7, answer = 1;

    cin >> A >> N;
    rep(i, N)
    {
        answer = (answer * A) % p;
    }

    cout << answer << endl;

    return 0;
}
