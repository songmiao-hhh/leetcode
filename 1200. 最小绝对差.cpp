#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
	sort(arr.begin(),arr.end());
	vector<vector<int>> ans;
	//vector<int> temp;
	int cur;
	int min = arr[1]-arr[0];
	//cout << "running" << endl;
	for (int i = 0; i < arr.size() - 1 ;i++) {
		cur = arr[i + 1] - arr[i];
		//cout << "running" << endl;
		if (cur < min) {
			ans.clear();
			min = cur;
			
		}
		if (cur == min) {
			vector<int> temp{ arr[i] ,arr[i + 1] };
			//cout << "running" << endl;
			ans.push_back(temp);
		}
	}
	return ans;
}
/*
int main() {
	int n;
	vector<int> pailie;
	while (cin >> n) {
		pailie.push_back(n);
	}
	vector<vector<int>> ans = minimumAbsDifference(pailie);
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i][0] <<" " << ans[i][1] << endl;
	}
	return 0;
}*/