#include <iostream>
using namespace std;

void gcd(int a, int b){
    int temp, count = 0, int1, int2;
    int1 = a;
    int2 = b;
    while (b != 0){
        temp = b;
        b = a % b;
        a = temp;
        count++;
    }
    cout << "GCD of " << int1 << " and " << int2 << " is " << a << " which ran " << count << " times " << endl;
}

int main(){
    int a = 10, b = 15;
    gcd(a, b);
    return 0;
}