#include <iostream>
#include <string>
#include <vector>
using namespace std;
int N, M;
int main()
{
    vector<string> vs;
    int cnt = 0;
    cin >> N >> M;
    for(int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        vs.push_back(s);
        
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M-1; j++)
        {
            if(vs[i][j]=='.' && vs[i][j+1] == '#') cnt++;
            else if(vs[i][j]=='#' && vs[i][j+1] == '.') cnt++;
        }
    }
    for(int i = 0; i < N-1; i++)
    {       
        for(int j = 0; j < M; j++)
        {
            if(vs[i][j]=='.' && vs[i+1][j] == '#') cnt++;
            else if(vs[i][j]=='#' && vs[i+1][j] == '.') cnt++;
        }
    }
    for(int i = 0; i < N-1; i++)
    {       
        for(int j = 0; j < M-1; j++)
        {
            if(i%2 == 0){
                if(vs[i][j+1] == '.'&& vs[i+1][j] == '#' ) cnt++;
                else if(vs[i][j+1] == '#'&& vs[i+1][j] == '.' ) cnt++;
            }
            if(i%2 == 1){
                if(vs[i][j] == '.'&& vs[i+1][j+1] == '#' ) cnt++;
                else if(vs[i][j] == '#'&& vs[i+1][j+1] == '.' ) cnt++;
            }
        }
    }
    cout << cnt << endl;
}