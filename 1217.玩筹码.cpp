#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int minCostToMoveChips(vector<int>& position) {
	int count0 = 0;
	int count1 = 0;
	for (int i = 0; i < position.size(); i++) {
		if ((position[i] % 2) == 0) {
			count0++;
		}
		else count1++;
	}
	return min(count0,count1);
}
/*
int main() {
	int n;
	vector<int> pailie;
	while (cin >> n) {
		pailie.push_back(n);
	}
	int ans = minCostToMoveChips(pailie);
	cout << ans << endl;
	return 0;
}*/