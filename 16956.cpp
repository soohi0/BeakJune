#include <iostream>
#include <string>
#include <queue>
#include <utility>
using namespace std;

int R, C;
char ** map;
vector<pair<int, int>> Wpos; //x, y
struct DIR
{
  int x;
  int y;
};
DIR moveDir[4] = {(0, 1), (1, 0), (-1, 0), (0, -1)}
bool isinRange(int x, int y)
{
  if(x >= 0 && x < C && y >= 0 && y < R ) return true;
  else return false;
}
void printV()
{
  for(int i = 0; i< R; i++)
  {
    for(int j = 0; j < C; j++)
    {
      cout << map[i][j];
    }
    cout <<endl;
  }
}
void BFS()
{
  int start = 0;
  int end = 0;
  stack< pair<int, int> > s; //x, y
  int cnt = 0;
  while(s.empty())
  {
    int cur_x = s.top().first;
    int cur_y = s.top().second;

    for(int i = 0;; i < 4; i++)
    {
      int next_x = cur_x + moveDir[i].x;
      int next_y = cur_y + moveDir[i].y;
      if(isinRange(next_x, next_y))
      {
        s.push(make_pair(next_x, next_y));
      }
    }
  }
  
}
int main()
{
  //queue<pair<int, int> > q;
  cin >> R >> C;//r:세로, c:가로
  map = new char*[R];
  for(int i = 0; i < R; i++)
  {
    map[i] = new char[C];
    string s;
    cin >> s;
    for(int j = 0; j < C; j++)
    {
      map[i][j] = s[j];
      if(map[i][j] == 'W'){
        Wpos.push_back(make_pair(j, i));
      }
    }
  }
  BFS();
  
}