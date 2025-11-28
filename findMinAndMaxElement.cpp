#include <iostream>
#include <vector>
#include <optional>
#include <algorithm>
using namespace std;

optional<pair<int, int>> findPeakOrLow(const vector<int>& vec, int choice) {
    if(!vec.empty()) {
        if(choice == 1) {
            auto it = max_element(vec.begin(), vec.end());
            return make_pair(*it, distance(vec.begin(), it));
        }
        else if(choice == 2) {
            auto it = min_element(vec.begin(), vec.end());
            return make_pair(*it, distance(vec.begin(), it));
        }
        return nullopt;
    }
    return nullopt;
}

int main(void) {
    vector<int> arr = {-1, -2};

    int choice1 = 1, choice2 = 2;

    auto result1 = findPeakOrLow(arr, choice1);
    auto result2 = findPeakOrLow(arr, choice2);
    result1 ? cout << "Max: " << result1->first << ", Index: " << result1->second << endl : cout << "Empty array" << endl;
    result2 ? cout << "Min: " << result2->first << ", Index: " << result2->second << endl : cout << "Empty array" << endl;

}