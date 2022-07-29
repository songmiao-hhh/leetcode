#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <sstream>
#include <unordered_set>
using namespace std;

int oddCells(int m, int n, vector<vector<int>>& indices) {
	vector<int> juzheng(m*n,0);
	for (int i = 0; i < indices.size(); i++) {
		for (int j = 0; j < n; j++) {
			juzheng[indices[i][0] * n + j]++;
		}
		for (int j = 0; j < m; j++) {
			juzheng[indices[i][1] + n*j]++;
		}
	}
	int sum = 0;
	for (int i = 0; i < juzheng.size(); i++) {
		if ((juzheng[i] % 2) != 0) {
			sum++;
		}
	}
	return sum;
}

int main() {
	int m, n;
	cin >> m;
	cin >> n;
	vector<vector<int>> indices;
	
	int t1;
	int t2;
	while (cin >> t1) {
		vector<int> temp;
		cin >> t2;
		temp.push_back(t1);
		temp.push_back(t2);
		indices.push_back(temp);
	}
	int sum = oddCells(m, n, indices);
	cout << "sum:" << sum << endl;
}