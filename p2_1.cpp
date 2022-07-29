#include <iostream>
using namespace std;

int main(){
    int i, j, N, count = 0;

    cout << "Enter size of arr: ";
    cin >> N;

    int arr[N];
    for (i = 0; i < N; i++){
        cin >> arr[i];
    }

    for (i = 0; i < N - 1; i++){
        for (j = 0; j < N - i - 1; j++){
            count++;
            if (arr[j] > arr[j + 1]){
                count++;
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Sorted array: ";
    for (i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    cout << endl << "Count = " << count << endl;
    return 0;
}