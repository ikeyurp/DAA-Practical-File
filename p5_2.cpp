// // Let S be a collection of objects with profit-weight values. Implement the 01 Knapsack for S assuming we have a sack that can hold objects with total weight W.
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main()
// {
//     int w, n, S;
//     vector<int> p(4), q(4), r;

//     p[0] = 1;
//     p[1] = 2;
//     p[2] = 5;
//     q[0] = 2;
//     q[1] = 3;
//     q[2] = 4;

//     w = 6;
//     n = 3;
//     S = 3;

//     int dp[n + 1][w + 1];

//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <= w; j++)
//         {
//             if (i == 0 || j == 0)
//                 dp[i][j] = 0;
//             else if (p[i - 1] <= j)
//                 dp[i][j] = max(dp[i - 1][j], q[i - 1] + dp[i - 1][j - p[i - 1]]);
//             else
//                 dp[i][j] = dp[i - 1][j];
//         }
//     }

//     cout << "The maximum value that can be obtained is: " << dp[n][w] << endl;

//     int i = n, j = w, k = 0;

//     while (i > 0 && j > 0)
//     {
//         if (dp[i][j] != dp[i - 1][j])
//         {
//             r.push_back(1);
//             i--;
//             j -= p[i];
//             k++;
//         }
//         else
//         {
//             r.push_back(0);
//             i--;
//         }
//     }

//     while (k < S)
//     {
//         r.push_back(0);
//         k++;
//     }

//     reverse(r.begin(), r.end());

//     cout << "The objects to be included in the sack are: { ";

//     for (int i = 0; i < S; i++)
//     {
//         if (r[i])
//             cout << "0 ";
//         else
//             // cout << "(" << p[i] << ", " << q[i] << ") ";
//             cout << "1 ";
//     }

//     cout << "}" << endl;

//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> w(n);
    vector<int> v(n);
    vector<int> order(n);
    for(int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i < n; i++)
    {
        order[i] = i;
    }
    sort(order.begin(), order.end(),
         [&](int i, int j) { return w[i] < w[j]; });
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for(int i = 1; i <= n; i++)
    {
        int item = order[i - 1];
        for(int j = 0; j <= m; j++)
        {
            if(w[item] > j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[item]] + v[item]);
        }
    }
    cout << "The maximum value is " << dp[n][m] << '\n';
    int x = m, y = n;
    while(y != 0 && x != 0)
    {
        if(dp[y][x] != dp[y - 1][x])
        {
            cout << "Take item " << order[y - 1] + 1 << '\n';
            x -= w[order[y - 1]];
        }
        y--;
    }
    return 0;
}