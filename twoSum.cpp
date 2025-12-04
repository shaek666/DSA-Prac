#include <bits/stdc++.h>
using namespace std;

pair<int, int> twoSum(const vector<int>& arr, int target) {
    size_t left = 0, right = arr.size() - 1;
    while(left < right) {
        int sum = arr[left] + arr[right];
        if(sum == target) return {left + 1, right + 1};
        else if(sum < target) left++;
        else right--;
    }
    return {-1, -1};
}

int main(void) {

    int n;

    cin >> n;

    vector<int> a(n);

    int t;

    cin >> t;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    pair<int, int> x = twoSum(a, t);

    cout << x.first << " " << x.second  << endl;

}