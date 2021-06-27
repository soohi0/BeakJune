//https://www.acmicpc.net/problem/3182
#include <iostream>
#include <cstring>

using namespace std;
int N;
int * answerList;
bool visited[1000];

int main()
{
    cin >> N;
    answerList = new int [N];
    for(int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        answerList[i] = --n;
    }
    int real_turn = 0;
    int real_cnt = 0;
    for(int i = 0; i < N; i++)
    {
        memset(visited, 0, sizeof(visited));
        int cnt = 0;
        int turn = i;
        //cout << visited[i]<<endl;
        while (!visited[turn])
        {
            visited[turn] = true;
            turn = answerList[turn];
            cnt++;
        }
        if(real_cnt < cnt)
        {
            real_cnt = cnt;
            real_turn = i;
        } 
    }
    cout << real_turn+1 <<endl;
}