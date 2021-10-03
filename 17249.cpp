#include <iostream>
#include <string>

using namespace std;
int main()
{ 
    int countLeft = 0, countRight = 0;
    string str;
    int i = 0;
    cin >> str;
    while (str[i] != '(')
    { 
        if (str[i] == '@')
            countLeft++;
        i++; 
    }
    while (i < str.length())
    { 
        if (str[i] == '@')
            countRight++;
        i++;
    } 
    cout << countLeft << " "<< countRight; 
    
}
