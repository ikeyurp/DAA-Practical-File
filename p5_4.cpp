// Implement a program to print the longest common subsequence for the following strings:
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;

    int n = s1.length();
    int m = s2.length();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1));

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;

            else if (s1[i - 1] == s2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];

            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    int index = dp[n][m];

    string res(index, ' ');

    int i = n, j = m;
    while (i > 0 && j > 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            res[index - 1] = s1[i - 1];
            i--;
            j--;
            index--;
        }

        else if (dp[i - 1][j] > dp[i][j - 1])
            i--;

        else
            j--;
    }

    cout << res;
    return 0;
}