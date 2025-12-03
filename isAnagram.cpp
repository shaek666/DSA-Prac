#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string& a, string& b) {
    if(a.length() != b.length()) {
        return false;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main(void) {
    string s, t;

    int n;
    cin >> n;

    while(n--) {
    cin >> s;
    cin >> t;


    if(isAnagram(s, t)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
return 0;
}