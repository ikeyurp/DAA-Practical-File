// Implement a program which has BNMCOEF() functionthat takes two parameters n and k and returns the value of Binomial Coefficient C(n, k). Compare the dynamic programming implementation with recursive implementation of BNMCOEF(). (In output, entire table should be displayed.)
#include <iostream>
using namespace std;
int BNMCOEF(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    else
        return BNMCOEF(n - 1, k - 1) + BNMCOEF(n - 1, k);
}
int main() {
    int n, k;
    cout << "Enter the value of n and k: ";
    cin >> n >> k;
    cout << "The value of binomial coefficient is " << BNMCOEF(n, k) << endl;
    return 0;
}