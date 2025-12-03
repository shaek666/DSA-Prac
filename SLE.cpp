#include <bits/stdc++.h>
using namespace std;

void secondLargestElement (const vector<int>& arr) {
    int largest = INT_MIN, secondLargest = INT_MAX;
    for(int i : arr) {
        if(i > largest) {
            secondLargest = largest;
            largest = i;
        } else if(i < largest && i > secondLargest) {
            secondLargest = i;
        }
    }

    if(secondLargest == INT_MIN) {
        cout << "NO" << endl;
    } else {
        cout << secondLargest << endl;
    }
}

int main(void) {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    secondLargestElement(a);
}