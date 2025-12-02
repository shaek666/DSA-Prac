#include <bits/stdc++.h>
using namespace std;

int main(void) {

    vector<int> scores;

    scores.emplace_back(1500);
    scores.emplace_back(2300);
    scores.emplace_back(1800);
    scores.emplace_back(3200);
    scores.emplace_back(2100);
    scores.emplace_back(2900);
    scores.emplace_back(1700);
    scores.push_back(2500);
    
    // auto maxVal = max_element(scores.begin(), scores.end());
    // auto championScore = *maxVal;

    auto totalScore = accumulate(scores.begin(), scores.end(), 0);
    auto avgScore = static_cast<double>(totalScore) / scores.size();

    // sort(scores.begin(), scores.end());

    // for(int i = 0; i < scores.size(); i++) {
    //     cout << scores[i] << endl;
    // }

    // cout << endl;

    // reverse(scores.begin(), scores.end());

    // for(int i = 0; i < scores.size(); ++i) {
    //     cout << scores[i] << endl;
    // }

    // sort(scores.rbegin(), scores.rend());
    // scores.resize(3);

    // for(auto score : scores) {
    //     cout << score << endl;
    // }

    // cout << endl;

    // cout << static_cast<double>((accumulate(scores.begin(), scores.end(), 0)) / 3.0) << endl;
    
    // vector<int> beginner, intermidiate, expert;

    // for_each(scores.begin(), scores.end(), [&](int i) {
    //     if(i < 2000) {
    //         beginner.emplace_back(i);
    //     }

    //     else if (i <= 2999) {
    //         intermidiate.emplace_back(i);
    //     }

    //     else {
    //         expert.emplace_back(i);
    //     }
    // });

    // sort(beginner.begin(), beginner.end());
    // sort(intermidiate.begin(), intermidiate.end());
    // sort(expert.begin(), expert.end());

    // cout << *max_element(beginner.begin(), beginner.end()) << endl;
    // cout << static_cast<double>(accumulate(beginner.begin(), beginner.end(), 0)) / beginner.size() << endl;
    // cout << *max_element(intermidiate.begin(), intermidiate.end()) << endl;
    // cout << static_cast<double>(accumulate(intermidiate.begin(), intermidiate.end(), 0)) / intermidiate.size() << endl;
    // cout << *max_element(expert.begin(), expert.end()) << endl;
    // cout << static_cast<double>(accumulate(expert.begin(), expert.end(), 0)) / expert.size() << endl;

    int j = 0;

    for(int i = 0; i < scores.size(); ++i) {
        if(scores[i] > avgScore) {
            j++;
        }
    }

    cout << j << endl;

    int range;

    range = *max_element(scores.begin(), scores.end()) - *min_element(scores.begin(), scores.end());

    cout << range << endl;

    sort(scores.begin(), scores.end());

    int median;

    if(scores.size() % 2 == 0) {
        median = (scores[scores.size() / 2 - 1] + scores[scores.size() / 2]) / 2;
    }

    else {
        median = scores[scores.size() / 2];
    }

    // cout << championScore << endl;
    // cout << totalScore << endl;
    // cout << avgScore << endl;

}