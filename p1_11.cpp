#include <iostream>
using namespace std;
 
void factorial(unsigned int n)
{
    int count = 0, fact = 1;
    if (n == 0)
        return 1;
    else
        count++;
        cout << "Factorial of " << n << " is " << n * factorial(n - 1) << " which ran " << count << " times " << endl;
}

int main()
{
    int num = 5;
    factorial(num);
    return 0;
}