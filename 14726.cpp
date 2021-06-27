#include <iostream>
#include <string>
#include <vector>
using namespace std;
int n;
vector<bool> vb;
bool isValid(string s)
{
    int sizeidx = s.length()-1;
    for(int i = sizeidx; i >= 0; i--)
    {
        if( i % 2 == 0){
            int num = (s[i] - '0') * 2;
            if( num >= 10)
            {
                string ss = to_string(num);
                num = (ss[0]-'0') + (ss[1] - '0');
            }
            s[i] = num+'0';
        }
    }
    int sum = 0;
    for(int i =0; i < 16; i++)
    {
        sum += (s[i]-'0');
    }
    if(sum %10 == 0)
        return true;
    else return false;
}
int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        vb.push_back(isValid(s));

    }
    for(int i = 0; i < vb.size(); i++)
    {
        if(vb[i]) cout << "T" << endl;
        else cout << "F" << endl;
    }
    
}