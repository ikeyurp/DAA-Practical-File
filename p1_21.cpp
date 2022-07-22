#include <iostream>
using namespace std;

int main()
{
    int n1, n2, hcf, count = 0;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    if (n2 < n1){   
        int temp = n2;
        n2 = n1;
        n1 = temp;
    }

    for (int i=n1; i > 0; i--){
        count++;
        if (n1 % i == 0 && n2 % i ==0){
            hcf = i;
            break;
        }
    }
    cout << "GCD of " << n1 << " and " << n2 << " is " << hcf << " which ran " << count << " times " << endl;
    return 0;
}