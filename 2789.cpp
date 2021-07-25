#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string news;
    for(int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if(c == 'C'||c == 'A'||c == 'M'||c == 'B'||c == 'R'||c == 'I'||c == 'D'||c == 'G'||c == 'E')
        {
            ;
        }
        else{
            news+= c;
        }
    }
    cout << news;
}