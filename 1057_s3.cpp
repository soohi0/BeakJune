#include <iostream>
#include <vector>
#include <map>
using namespace std;
void printvect(vector<int> v)
{
    cout << "vector : ";
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int N;
    int sm;
    int hs;

    cin >> N >> sm >> hs;
    vector<int> players(N);

    int smidx = sm-1;
    int hsidx = hs-1;

    players[smidx] = 1;
    players[hsidx] = 1;

    int round = 1;
    bool teamMatched = false;
    //printvect(players);
    while(players.size() > 1)
    {
        vector<int> nextPlayers;
        int holsoo = -1;
        int psize = players.size();
        if(psize %2 == 1)
        {
            // 홀수면
            holsoo = players[psize-1];
            players.resize(psize-1);
        }
        for(int i = 0; i < players.size(); i=i+2)
        {
            if(players[i] == 0 && players[i+1] == 0)
            {
                nextPlayers.push_back(0);
            }
            else if((players[i] == 0 && players[i+1] == 1)||(players[i] == 1 && players[i+1] == 0))
            {
                nextPlayers.push_back(1);
            }
            else if(players[i] == 1 && players[i+1] == 1)
            {
                nextPlayers.push_back(1);
                teamMatched = true;
                break;
            }
        }
        if(teamMatched) break;
        if(holsoo != -1)
        {
            nextPlayers.push_back(holsoo);
        }
        players = nextPlayers;
        round++;
        //cout << "while : ";
        //printvect(players);

    }
    if(teamMatched)
    {
        cout << round << endl;
    }
    else{
        cout << -1 << endl;
    }
}

