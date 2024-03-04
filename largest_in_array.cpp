#include <bits/stdc++.h>
using namespace std;

// Brute force - Giving the last element in the sorted array by sorting - O(NlogN)
// Optimal & Better approach - O(N)
int largest_element(int n, int arr[]){
    int largest = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << largest_element(n, arr);
}