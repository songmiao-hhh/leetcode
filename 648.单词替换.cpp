#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <sstream>
#include <unordered_set>
using namespace std;

string replaceWords(vector<string>& dictionary, string sentence) {
	unordered_set<string> dic;
	for (int i = 0; i < dictionary.size(); i++) {
		dic.insert(dictionary[i]);
		cout << "dictionary[i]:" << dictionary[i] << endl;
	}
	string ans;
	istringstream buf_stream(sentence);
	string tmp;
	while (buf_stream >> tmp) {
		string str;
		for (int i = 0; i < tmp.size(); i++) {
			str += tmp[i];
			if (dic.find(str) != dic.end()) break;
		}
		ans += (str + ' ');
		//buf_stream >> tmp;
	}
	ans.pop_back();
	return ans;
}
/*
int main() {
	string n0;
	string n;
	cin >> n;
	while ((int)n[0] >= 64) {
		n0 += (n + ' ');
		cin >> n;
	}
	cout << n0 << endl;
	vector<string> dictionary;
	cin >> n;
	while ((int)n[0] >= 64) {
		dictionary.push_back(n);
		cin >> n;
	}
	string ans = replaceWords(dictionary,n0);
	cout << ans << endl;
	return 0;
}*/