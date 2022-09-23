#include <iostream>
using namespace std;
int main()
{
    int t, a, n, i, j, k, min, temp, min_coins, coins[100];
    cin >> t;
    while (t--)
    {
        cin >> a;
        cin >> n;
        for (i = 0; i < n; i++)
            cin >> coins[i];
        min_coins = a;
        for (i = 0; i < n; i++)
        {
            if (coins[i] <= a)
            {
                min = coins[i];
                break;
            }
        }
        for (i = 0; i < n; i++)
        {
            if (coins[i] > min)
            {
                temp = a / coins[i];
                if (temp < min_coins)
                    min_coins = temp;
            }
        }
        cout << min_coins << endl;
    }
    return 0;
}