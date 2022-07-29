#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <sstream>
#include <unordered_set>
using namespace std;

class MagicDictionary {
private:
    vector<string> magicDictionary;
public:
    MagicDictionary() {

    }

    void buildDict(vector<string> dictionary) {
        for (int i = 0; i < dictionary.size(); i++) {
            magicDictionary.push_back(dictionary[i]);
        }

    }

    bool search(string searchWord) {
        for (int i = 0; i < magicDictionary.size(); i++) {
            if (searchWord.length() != magicDictionary[i].length()) continue;
            else {
                int diff = 0;
                for (int j = 0; j < searchWord.length(); j++) {
                    if (searchWord[j] != magicDictionary[i][j]) diff++;
                    if (diff > 1) break;
                }
                if (diff == 1) {
                    return true;
                }
            }
        }
        return false;
    }
};
/*
int main() {
    MagicDictionary* obj = new MagicDictionary();
    string n0;
    string n;
    vector<string> dictionary;
    cin >> n;
    while ((int)n[0] >= 64) {
        dictionary.push_back(n);
        cin >> n;
    }
    obj->buildDict(dictionary);
    cin >> n;
    while ((int)n[0] >= 64) {
        bool param_2 = obj->search(n);
        cout << param_2 << endl;
        cin >> n;
    }
    
    //cout << ans << endl;
    return 0;
}*/