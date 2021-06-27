#include <iostream>
#include <cstring>
using namespace std;
int member[151];
bool visited[151];
int N, K;
int main(){
    cin >> N >> K;
    for(int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        member[i] = n;
    } 
    visited[0] = 1;
	int next = member[0];
	int k = 1;
	for (;;) {
		if (visited[next]) {
			printf("-1\n");
			return 0;
		}
		else {
			if (next == K) {
				printf("%d\n", k);
				return 0;
			}
			visited[next] = 1;
			next = member[next];
		}
		k++;
	}
}