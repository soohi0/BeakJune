#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m, result;

vector<int> arr(n);
void solve(int idx, int sum){
	sum += arr[idx]; //우선 해당 숫자를 더한다
	if (idx >= n) return;		// [기저1] - 범위 초과시 return
	if (sum == m) result++;		// [기저2] - S를 찾은 경우 경우의 수 추가
	solve(idx + 1, sum - arr[idx]); // idx번 요소를 더하지 않는 경우
	solve(idx + 1, sum); 		// idx번 요소를 더하는 경우
}
int main()
{
    cin >> n>> m;
    for(int i = 0; i < n; i++)
    {
        cin >> n;
        arr[i] = n;
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {

        }
    }

}