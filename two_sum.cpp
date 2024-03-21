#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target){
    map<int, int> mpp;
    vector<int> v;
    for(int i = 0; i < nums.size(); i++){
        int a = nums[i];
        int more = target - a;
        if(mpp.find(more) != mpp.end()){
            v.push_back(mpp[more]);
            v.push_back(i);
            break;
        }
        mpp[nums[i]] = i;
    }
    return v;
}

int main(){
    int n;
    cin >> n;
    int target;
    cin >> target;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        arr.push_back(val);
    }
    vector<int> ans = twoSum(arr, target);
    for(auto it : ans){
        cout << it << " ";
    }

}