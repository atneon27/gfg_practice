#include <bits/stdc++.h>
using namespace std;

int missing_number(int n, int arr[]){
    int xor1, xor2;
    xor1 = 0;
    xor2 = 0;
    for(int i = 0; i < n-1; i++){
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1 ^= n;
    return xor1 ^ xor2;
}

int main(){
    int n;
    cin >> n;
    int arr[n-1];
    for(int i = 0; i < n-1; i++) cin >> arr[i];
    cout << missing_number(n, arr);

}