#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isInterestingPair(const string& word1, const string& word2) {
    int diffCount = 0;

    // проверка отличаются ли слова ровно на 1 символ
    for (int i = 0; i < word1.size(); ++i) {
        if (word1[i] != word2[i]) {
            ++diffCount;
            if (diffCount > 1) {
                return false; 
            }
        }
    }
    return diffCount == 1; 
}

int countInterestingPairs(const vector<string>& words) {
    int pairCount = 0;
    int n = words.size();

  
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
           
            if (isInterestingPair(words[i], words[j])) {
                ++pairCount;
            }
        }
    }

    return pairCount;
}

int main() {
    int n;
    cin >> n;

    vector<string> words(n);
    for (int i = 0; i < n; ++i) {
        cin >> words[i];
    }

    cout << countInterestingPairs(words) << endl;

    return 0;
}