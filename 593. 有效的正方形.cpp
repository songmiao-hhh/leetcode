#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
	int b1,b2,b3;
	b1 = pow((p1[0] - p2[0]), 2) + pow((p1[1] - p2[1]), 2);
	b2 = pow((p1[0] - p3[0]), 2) + pow((p1[1] - p3[1]), 2);
	b3 = pow((p1[0] - p4[0]), 2) + pow((p1[1] - p4[1]), 2);
	if (b1 == b2) {
		int dot = (p1[0] - p4[0]) * (p2[0] - p3[0]) + (p1[1] - p4[1]) * (p2[1] - p3[1]);
		if ((b1 + b2) != b3 || p2 == p3 || dot != 0) return false;
		else return true;
	}
	else if (b1 == b3) {
		int dot = (p1[0] - p3[0]) * (p4[0] - p2[0]) + (p1[1] - p3[1]) * (p4[1] -  p2[1]);
		if ((b1 + b3) != b2 || p2 == p4 || dot != 0) return false;
		else return true;
	}
	else if (b2 == b3) {
		int dot = (p1[0] - p2[0]) * (p4[0] - p3[0]) + (p1[1] - p2[1]) * (p4[1] - p3[1]);
		if ((b2 + b3) != b1 || p3 == p4 || dot != 0) return false;
		else return true;
	}
	return false;
}

int main() {
	int n;
	vector<int> p1,p2,p3,p4;
	int i = 2;
	while(i>0) {
		cout << "p1:" << endl;
		cin >> n;
		p1.push_back(n);
		i--;
	}

	i = 2;
	while (i > 0) {
		cout << "p2:" << endl;
		cin >> n;
		p2.push_back(n);
		i--;
	}

	i = 2;
	while (i > 0) {
		cout << "p3:" << endl;
		cin >> n;
		p3.push_back(n);
		i--;
	}

	i = 2;
	while (i > 0) {
		cout << "p4:" << endl;
		cin >> n;
		p4.push_back(n);
		i--;
	}
	bool type = validSquare(p1,p2,p3,p4);
	if (type) cout << "true" << endl;
	else cout << "false" << endl;
	for (int i = 0; i < p1.size(); i++) {
		cout <<"p1[0]:" << p1[i] << " " << "p2[0]:" << p2[i] << " " << "p3[0]:" << p3[i] << " " << "p4[0]:" << p4[i] << " " << endl;
	}
	return 0;
}