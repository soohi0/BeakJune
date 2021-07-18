#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <map>
using namespace std;
struct Dir{
    int x;
    int y;
};
Dir moveDir[4] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int map_ [5][5];
vector<string> vs;
bool isinRange(int x, int y )
{
    if ( x >= 0 && x < 5 && y >= 0 && y < 5) return true;
    else return false;
}
bool isexist(string s1){
    for(int i = 0; i < vs.size(); i++)
    {
        if(s1 == vs[i]) return true;
        
    }
    return false;
}
int main()
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            int num;
            cin >> num;
            map_[i][j] = num;
        }
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            int startX = j;
            int startY = i;
            string s = to_string(map_[startY][startX]);
            queue< pair<string, pair<int, int> > > qs;

            qs.push(make_pair(s, make_pair(startX, startY)));
            while(!qs.empty())
            {
                //string s = map[startY][startX] + '0';
                string frontS = qs.front().first;
                int curX = qs.front().second.first;
                int curY = qs.front().second.second;
                for(int l = 0; l < 4; l++)
                {
                    int nextX = curX + moveDir[l].x;
                    int nextY = curY + moveDir[l].y;
                    if(isinRange(nextX, nextY))
                    {
                        string ss = frontS + to_string(map_[nextY][nextX]);
                        if(ss.length() <= 6)
                        {
                            qs.push(make_pair(ss, make_pair(nextX, nextY)));
                            if(ss.length() == 6)
                            {
                                if(!isexist(ss)) vs.push_back(ss);
                            }
                        }
                    }

                }
                qs.pop();
            }
        }
    }
    // for(int i = 0; i < vs.size(); i++){
    //     cout << vs[i]<< endl;
    // }
    cout << vs.size();


}