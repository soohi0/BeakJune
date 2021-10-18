#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int five = 5;
    int two = 2;
    int cnt = 0;
    if ((num % 5) % 2 == 0)
        cout << num / 5 + num % 5 / 2 << "\n";
    else if (num / 5 == 0)
        cout << "-1\n";
    else cout << num / 5 + (num % 5 + 5) / 2 - 1 << "\n";


}