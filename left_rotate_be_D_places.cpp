#include <bits/stdc++.h>
using namespace std;

void left_rotate_by_places_brute(int n, int arr[], int d){
    int temp[d];
    for(int i = 0; i < d; i++){
        temp[i] = arr[i];
    }

    for(int i = d; i < n; i++){
        arr[i-d] = arr[i];
    }

    for(int i = n-d; i < n; i++){
        arr[i] = temp[i-(n-d)];
    }
}

int main(){
    int n; 
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int d;
    cin >> d;
    
    left_rotate_by_places_brute(n, arr, d);
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}