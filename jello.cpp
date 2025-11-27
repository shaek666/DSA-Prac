#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void computePrefix(vector<int>& arr) {
        for (size_t i = 1; i < arr.size(); ++i) {
            arr[i] += arr[i - 1];
        }
    }

int subarraySum(const vector<int>& prefix, size_t l, size_t r) {
    if (l > r || r >= prefix.size()) return 0;
    return prefix[r] - (l > 0 ? prefix[l - 1] : 0);
    }

int main(void) {
    
    /* Traversal-------------------------------------------------------------------------------------*/

    /* vector<int> arr = {10, 20, 30, 40, 50};

    for(size_t i = 0; i < arr.size(); ++i) {
        cout << "Index " << i << ": " << arr[i] << endl;
    } */


    /*Min, Max--------------------------------------------------------------------------------------*/
    
    /* vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6};

    if(!arr.empty()) {
    auto [min_it, max_it] = minmax_element(arr.begin(), arr.end());

    cout << "Min " << *min_it << endl;
    cout << "Max " << *max_it << endl;
    } */
    
    
    /* Reversal-------------------------------------------------------------------------------------*/

    /* vector<int> arr = {1, 2, 3, 4, 5};

    reverse(arr.begin(), arr.end());

    for(int val : arr) {
        cout << val << " ";
    } */


    /*Compute prefix sum----------------------------------------------------------------------------*/

    /* vector<int> arr = {1, 2, 3, 4, 5};

    for(size_t i = 1; i < arr.size(); ++i) {
        arr[i] += arr[i - 1];
    }

    for (int val : arr) { 
        cout << val <<  " ";
    } */

    vector<int> arr = {1, 2, 3, 4, 5};

    computePrefix(arr);

    cout << "Sum [0, 2]: " << subarraySum(arr, 0, 2) << endl;  // 1+2+3 = 6
    cout << "Sum [1, 3]: " << subarraySum(arr, 1, 3) << endl;  // 2+3+4 = 9
    cout << "Sum [2, 4]: " << subarraySum(arr, 2, 4) << endl;  // 3+4+5 = 12
    cout << "Sum [0, 4]: " << subarraySum(arr, 0, 4) << endl;  // 1+2+3+4+5 = 15


}
