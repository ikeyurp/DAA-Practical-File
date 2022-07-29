// Factorial ()
#include <ostream>
#include <iostream>
using namespace std;

void factorial(unsigned int n)
{
    int res = 1, i, count = 0;
    for (i = 2; i <= n; i++){
        res *= i;
        count++;
    }
    cout << "Factorial of " << n << " is " << res << " which ran " << count << " times " << endl;
}

int main()
{
    int num = 10;
    factorial(num);
    return 0;
}