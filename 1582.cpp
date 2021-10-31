#include <iostream>
#include <tuple>
#include <vector>
#include <map>
#include <queue>
using namespace std;


int main() {
	int numOfPeople, m, l;
	cin >> numOfPeople >> m >> l;
	vector<int> count(numOfPeople);
	int currentPerson = 0;
	count[currentPerson] = 1;
	int ballTossCount = 0;
	while (true) {
		ballTossCount++;
		if (count[0] % 2 == 0) {
			currentPerson = (currentPerson - l + numOfPeople) % numOfPeople;
		}
		else {
			currentPerson = (currentPerson + l) % numOfPeople;
		}
		count[currentPerson]++;
		if (count[currentPerson] == m) break;
	}
	cout << ballTossCount;
	return 0;
}