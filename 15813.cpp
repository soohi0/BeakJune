#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        char c = s[i];
        //cout << (int)(c-'0')-16;
        sum += (int)(c-'0')-16;
    }
    cout << sum;
}