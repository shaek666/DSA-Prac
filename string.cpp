#include <bits/stdc++.h>
using namespace std;

// vector<string> splitString(const string& str) {
//         vector<string> words;
//         istringstream iss(str);
//         string word;

//         while (iss >> word) {
//             words.emplace_back(word);
//         }

//         return words;
//     }


int main(void) {

    string text = "The quick brown fox jumps over the lazy dog";

    text += " - A classic pangram";

    // cout << text << endl;

    // sort(text.begin(), text.end());

    // cout << text << endl;

    // cout << count(text.begin(), text.end(), 'o') << endl;

    // vector<string> sortedWords = splitString(text);

    // sort(sortedWords.begin(), sortedWords.end());

    // for(const auto& word : sortedWords) {
    //     cout << word << endl;
    // }

    // cout << endl;

    // auto longest = max_element(sortedWords.begin(), sortedWords.end(),
    //     [](const string& a, const string& b) {
    //         return a.length() < b.length();
    //     });

    // if(longest != sortedWords.end()) {
    //     cout << *longest << " " << longest->length() << endl;
    // }

    // transform(text.begin(), text.end(), text.begin(), [](auto c) { return toupper(c); });
    // cout << text << endl;
    // transform(text.begin(), text.end(), text.begin(), [](const unsigned char& c) { return tolower(c); });
    // cout << text << endl;
    // auto pos = text.find("quick");
    // if (pos != string::npos) {
    //     text.replace(pos, 5, "swift");
    // }
    // cout << text << endl;

    text.erase(remove_if(text.begin(), text.end(), [](unsigned char c) { return c == ' '; }), text.end());

    cout << text << endl;

    text.erase(remove_if(text.begin(), text.end(), [](unsigned char c) { return c == '-'; }), text.end());

    cout << text << endl;
}