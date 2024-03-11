#include <bits/stdc++.h>
using namespace std;

int remove_duplicates_brute(int n, int arr[]){
    set<int> st;
    int index = 0;
    for(int i = 0; i < n; i++){
        st.insert(arr[i]);
    }
    for(auto it : st){
        arr[index] = it;
        index++;
    }
    return index;
}

int remove_duplicates_optimal(int n, int arr[]){
    int i = 0;
    for(int j = 0; j < n; j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    int n; 
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 0; i < remove_duplicates_optimal(n, arr); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << remove_duplicates_optimal(n, arr);
}