#include <iostream>
using namespace std;
 
int main(){
    int M, N, P, x, i, j, count = 0;
    cout << "Enter No. of Column for M1: ";
    cin >> M;
    cout << "Enter No. of Rows for M1: ";
    cin >> N;
    cout << "Enter No. of Column for M2: ";
    cin >> P;
    
    int mat1[M][N], mat2[N][P];

    cout << "Enter elements for M1";
    for (i = 0; i < M ; i++){
        for (j = 0; j < N; j++){
            cin >> mat1[i][j];
        }
    }
    cout << "Enter elements for M2";
    for (i = 0; i < N ; i++){
        for (j = 0; j < P; j++){
            cin >> mat2[i][j];
        }
    }

    int res[M][P];

    for (i = 0; i < M; i++){
        for (j = 0; j < P; j++){
            res[i][j] = 0;
            for (x = 0; x < N; x++){
                *(*(res + i) + j) += *(*(mat1 + i) + x) * *(*(mat2 + x) + j);
                count++;
            }
        }
    }
    for (i = 0; i < M; i++){
        for (j = 0; j < P; j++){
            cout << *(*(res + i) + j) << " ";
        }
        cout << "\n";
    }
    cout << "Count = " << count << endl;
    return 0;
}