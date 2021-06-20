//https://www.acmicpc.net/problem/16173

//bfs에서 중요한것은 q와 visited
#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
int N;
vector<vector <int> > vv;
vector<vector <bool> > visited;
struct Dir{
    int x;
    int y;
};
Dir moveDir[2] = {{0, 1}, {1, 0}};
bool isrange(int x, int y)
{
    if( x >= 0 && x < N && y >= 0 && y < N) return true;
    else return false;
}
bool BFS()
{
    int startX = 0;
    int startY = 0;
    queue <pair<int, int> > q;
    q.push(make_pair(startX, startY));
    //visited[0][0] = 1;
    while(!q.empty())
    {
        int startx = q.front().first;
        int starty = q.front().second;
        int score = vv[starty][startx];
        visited[starty][startx] = 1;
        //cout <<"score : " << score << endl;
        if(score == -1) return true;
        for(int i = 0; i < 2; i++)
        {
            int nextX = startx + (moveDir[i].x * score);
            int nextY = starty + (moveDir[i].y * score);
            //cout << "--nextX : " << moveDir[i].x  << " --nextY : " << moveDir[i].y<< endl;
            if(isrange(nextX, nextY) && (visited[nextY][nextX] != 1))
            {
                //cout <<"nextX : " << nextX << " nextY : " << nextY << endl;
                q.push(make_pair(nextX, nextY));
                
            }

        }
        q.pop();
    }
    return false;

}
int main()
{
    cin >> N;


    for(int i = 0; i < N; i++)
    {
        vector<int> v(N);
        vector<bool> visit(N);

        vv.push_back(v);
        visited.push_back(visit);
        for(int j = 0; j < N;j++)
        {
            int n;
            cin >> n;
            vv[i][j] = n;
        }
    }
    if(BFS()) cout << "HaruHaru" << endl;
    else cout << "Hing" << endl;
}