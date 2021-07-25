#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int cycle;
    cin >> cycle;
    vector<string> vvs;
    do
    {
        vector<string> vs;
        for(int i = 0 ; i < cycle; i++)
        {
            string s;
            cin >> s;
            vs.push_back(s);
        }
        sort(vs.begin(), vs.end());
        vvs.push_back(vs[0]);
        //cout << vs[0];
        cin >> cycle;
    }
    while(cycle != 0);
    for(int i = 0 ; i < vvs.size(); i++)
    {
        cout << vvs[i] << endl;
    }
    
}