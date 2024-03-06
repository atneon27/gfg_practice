#include <bits/stdc++.h>
using namespace std;

// Brute force approach - sort the array then iterate form the back to give the second largest 

// better approach - O(N+N)
int second_largest_better(int n, int arr[]){
    int largest, slargest;
    largest = arr[0];
    slargest = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] > slargest && arr[i] != largest){
            slargest = arr[i];
        }
    }
    return slargest;
}

// optimal soluting - O(N)
int second_largest_optimal(int n, int arr[]){
    int largest, slargest;
    largest = arr[0];
    slargest = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << second_largest_better(n, arr);
    cout << second_largest_optimal(n, arr);
}