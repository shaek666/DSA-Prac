#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string& s) {
    int i = 0, j = s.length() - 1;
    while (i < j) {
        if(s[i++] != s[j--]) {
            return false;
        }
    }
    return true;
}

int main(void) {

    int n; //number of test cases
    cin >> n;


    while (n--) {
        string a;
        cin >> a;
    

    if(isPalindrome(a)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    }
    return 0;
}