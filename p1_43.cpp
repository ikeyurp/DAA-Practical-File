#include <iostream>
using namespace std;

void printMaxActivities(int s[], int f[], int n)
{
    int i, j;
    cout << "Following activities are selected:";
    i = 0;
    cout << " " << i+1;
    for (j = 1; j < n; j++)
    {
        if (s[j] >= f[i])
        {
            cout << " " << j+1;
            i = j;
        }
    }
    cout << endl;
}

int main()
{
    int s[] = {1, 1, 1, 2, 3, 4, 5, 6, 7};
    int f[] = {2, 3, 4, 5, 7, 9, 6, 8, 9};
    int n = sizeof(s) / sizeof(s[0]);
    printMaxActivities(s, f, n);
    return 0;
}