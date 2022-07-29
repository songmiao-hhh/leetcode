#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


void nextPermutation(vector<int>& nums) {
	int count = nums.size();
	int pos = -1;
	for (int i = count - 1; i > 0; i--) {
		if (nums[i - 1] < nums[i]) {
			pos = i; //posΪ�Ӻ���ǰ�ҵ��ĵ�һ��������Ǹ���ֵ��pos+1Ϊ��Ҫ������Ŀ��ֵ
			break;
		}
	}
	if (pos >= 0) {
		for (int i = count - 1; i >= pos; i--) {
			if (nums[i] > nums[pos - 1]) {
				swap(nums[pos - 1], nums[i]);
				reverse(nums.begin() + pos, nums.end());
				break;
			}
		}
	}
	else {
		reverse(nums.begin(), nums.end());
	}

}
/*
int main() {
	int n;
	vector<int> pailie;
	while (cin >> n) {
		pailie.push_back(n);
	}
	nextPermutation(pailie);
	for (int i = 0; i < pailie.size(); i++) {
		cout << pailie[i] << endl;
	}
	return 0;
}*/