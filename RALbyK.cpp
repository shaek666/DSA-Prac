#include <bits/stdc++.h>
using namespace std;

void rotateLeft(vector<int>& arr, int& k) {
    int n = arr.size();
    k %= n;

    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
}



int main(void) {
    int n, k;

    cin >> n;
    vector<int> vec(n);

    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    cin >> k;

    rotateLeft(vec, k);

    for (int i; i < n; i++) {
        cout << vec[i] << " ";
    }
}