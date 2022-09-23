#include<iostream>
using namespace std;
int power(int x,int y) {
    if(y==0)
        return 1;
    else if(y==1)
        return x;
    else if(y%2==0)
        return power(x,y/2)*power(x,y/2);
    else
        return x*power(x,y/2)*power(x,y/2);
}
int main() {
    int x,y;
    cout<<"Enter the value of x and y: ";
    cin>>x>>y;
    cout<<"The value of "<<x<<"^"<<y<<" is: "<<power(x,y)<<endl;
    cout<<"The total number of multiplications required is: "<<(y-1)<<endl;
    return 0;
}