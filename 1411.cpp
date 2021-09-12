#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int num;
    vector< vector<int> > vvi;

    for(int i = 0; i < num; i++)
    {
        string s;
        vector<int> vi;
        string vs;
        cin >> s;
        int maxnum = 1;
        for (int j = 0; j < s.length(); j++)
        {
            char c = s[j];
            if( j == 0)
            {
                vi.push_back(maxnum);
                maxnum++;
            }
            else{
                for (int k = 0; k < j ; k++)
                {
                    if(s[k] == c)
                    {
                        vi[j] = vi[k];
                    }
                    else{
                        if(s[k] == 0 && k == j-1)
                        {
                            //직전까지 왔는데도 0이면
                            vi.push_back(maxnum);
                            maxnum++;
                        }
                    }
                }
            }
            vvi.push_back(vi);
        }
    }
    for(int i = 0 ; i < vvi.size(); i++)
    {
        for(int j = 1; j < vvi.size(); j++)
        {
            bool issame = true;
            vector<int> vvin = vvi[j];
            for(int k = 0; k < vvin.size(); k++)
            {
                if (vvin[k] != vvi[i][k])
                {
                    issame = false;
                }
            }
            
        }
    }
}