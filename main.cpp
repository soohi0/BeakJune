#include <iostream>
#include <vector>
#include <stack>
#include <utility>
using namespace std;
void func2(int &s, int &t)
{
  s += 1;
}
void func1(int &s, int &t)
{
  s *= 2;
  t += 3;
}
int Min(int a, int b)
{
  if(a > b) return b;
  else return a;
}
int getCount(int s, int t)
{
  int cnt = 0;
  stack< pair< pair<int,int> , pair<int, int> > > st;
  //q.push_back();
  st.push(make_pair(make_pair(1, cnt), make_pair(s, t)));
  st.push(make_pair(make_pair(2, cnt), make_pair(s, t)));
  int cntmin = 987654321;
  while(!st.empty())
  {
    int top = st.top().first.first;
    int count = st.top().first.second;
    int cur_s = st.top().second.first;
    int cur_t = st.top().second.second;
    if(top == 1)
    {
      func1(cur_s, cur_t);
    }
    else{
      func2(cur_s, cur_t);
    }
    count++;
    if(cur_s > cur_t)
    {
      ;
    }
    else if(cur_s < cur_t)
    {
      s = cur_s;
      t = cur_t;
      st.push(make_pair(make_pair(1, count), make_pair(s, t)));
      st.push(make_pair(make_pair(2, count), make_pair(s, t)));
    }
    else{
      //s == T
      cntmin = Min(count, cntmin);
    }
    st.pop();
    
  }
  return cntmin;
}
int main() {
  int C;
  cin >> C;
  vector<int> cnt;
  for(int i = 0; i < C; i++)
  {
    int S, T;
    cin >> S >> T;
    cnt.push_back(getCount(S, T));
  }
  for(int i = 0; i < C; i++)
  {
    cout << cnt[i] << endl;
  }
}
