#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int nextGreaterElement(int n) {
	int temp = n;
	int count = 0;
	vector<int> wei;
	while (temp != 0) {
		wei.push_back(temp % 10);
		temp /= 10;
		count++;
	}
	//sort(wei.begin(),wei.end(),greater<int>());

	long long ans = 0;
	//cout << "wei[0]:" << wei[0] << "wei[1]:" << wei[1] << endl;
	for (int i = 0; i < count; i++) {
		ans += (wei[i] * pow(10,i));
	}
	//cout << ans << endl;
	if (ans == n || ans > 2147483647) return -1;
	else return ans;
	//cout << "count" << count << endl;
	
}
/*
int main() {
	int n;
	cin >> n;
	int ans = nextGreaterElement(n);
	cout << ans << endl;
	return 0;
}*/