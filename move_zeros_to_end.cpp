#include <bits/stdc++.h>
using namespace std;

void move_zeros_brute(int n, int arr[]){
    int index = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            arr[index] = arr[i];
            index++;
        }
    }

    for(int i = n - 1; i >= index; i--){
        arr[i] = 0;
    }
}

void move_zeros_optimal(int n, int arr[]){
    int j = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    for(int i = j + 1; i < n; i++){
        if(arr[i] != 0){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // move_zeros_brute(n, arr);
    move_zeros_optimal(n, arr);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}