#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;

int maxhappy = -1;
int N;

void go(vector<int> &p,vector<int> &h,int number,int happy,int power) {
	if (power < 1) return;
	if (number >= N) {
		maxhappy = max(maxhappy, happy);
		return;
	}
	go(p, h, number + 1, happy, power);
	go(p, h, number + 1, happy + h[number],power - p[number]);
}
int main() {

	cin >> N;
	vector<int> power(N);
	vector<int> happy(N);
	for (auto& x : power) cin >> x;
	for (auto& x : happy) cin >> x;
	go(power,happy,0,0,100);
	cout << maxhappy;
}