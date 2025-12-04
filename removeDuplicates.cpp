#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& arr) {
    if(arr.empty()) return 0;
    int j = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] != arr[j]) {
            arr[++j] = arr[i];
        }
    }
    return j + 1;
}

int main (void) {

    int n;
    cin >> n;
    vector <int> nums(n);

    for(int i = 0; i < nums.size(); i++) {
        cin >> nums[i];
    }

    cout << removeDuplicates(nums) << endl;
}