#include <iostream>
using namespace std;

int main(){
    int count = 0;
    int N;
    cout << "No. of elements";
    cin >> N;
    int A[N][N], B[N][N];

    int i, j;
    cout << "Enter elements for A";
    for (i = 0; i < N ; i++){
        for (j = 0; j < N; j++){
            cin >> A[i][j];
        }
    }
    cout << "Enter elements for B";
    for (i = 0; i < N ; i++){
        for (j = 0; j < N; j++){
            cin >> B[i][j];
        }
    }

    int C[N][N];
    
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            count++;
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++)
        cout << C[i][j] << " ";
        cout << endl;
    }
    cout << count;
    return 0;
}