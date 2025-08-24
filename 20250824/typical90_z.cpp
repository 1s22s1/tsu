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

template <typename T>

class LinearGraph
{

public:
    vector<ll> visited;

    LinearGraph(T _graph)
    {
        graph = _graph;
    }

    void bfs(vector<ll> starts = {0})
    {
        visited.assign(graph.size(), -1);

        queue<ll> queue;

        for (auto start : starts)
        {
            queue.emplace(start);
            visited.at(start) = 0;
        }

        while (!queue.empty())
        {
            auto current = queue.front();
            queue.pop();

            for (auto next : graph.at(current))
            {
                if (visited.at(next) != -1)
                {
                    continue;
                }

                queue.emplace(next);
                visited.at(next) = visited.at(current) == 1 ? 0 : 1;
            }
        }
    }

private:
    T graph;
};

int main()
{
    init();

    ll N;
    cin >> N;

    vector<vector<ll>> g(N);

    rep(i, N - 1)
    {
        ll A, B;
        cin >> A >> B;
        A--, B--;

        g.at(A).emplace_back(B);
        g.at(B).emplace_back(A);
    }

    LinearGraph graph(g);
    graph.bfs({0});
    auto visited = graph.visited;

    ll white_count = count_if(visited.begin(), visited.end(), [](int x)
                              { return x == 0; });
    ll black_count = count_if(visited.begin(), visited.end(), [](int x)
                              { return x == 1; });

    ll count = 0;
    rep(i, N)
    {
        if (white_count >= black_count)
        {
            if (visited.at(i) == 0)
            {
                cout << i + 1 << ' ';
                count++;
            }
        }

        if (white_count < black_count)
        {
            if (visited.at(i) == 1)
            {
                cout << i + 1 << ' ';
                count++;
            }
        }

        if (count >= N / 2)
        {
            cout << endl;

            break;
        }
    }

    return 0;
}
