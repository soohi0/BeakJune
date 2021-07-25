#include <iostream>
#include <string>
using namespace std;
string change(string s, int fi, int se)
{
    char temp = s[fi];
    s[fi] = s[se];
    s[se] = temp;
    return s;
}
int main()
{
    string inputstr = "";
    int T;
    cin >> inputstr >> T;
    for(int i = 0; i < T; i++)
    {
        int first, second;
        cin >> first >> second;
        inputstr = change(inputstr, first, second);
    }
    cout << inputstr;
    return 0;

}