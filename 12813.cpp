#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <bitset>

using namespace std;

short convert(short n) {
    short dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

int main() {
    short  num1, num2;
    cin >> num1 >> num2;
    short bnum1 = convert(num1);
    short bnum2 = convert(num2);
    cout << bitset<6>(bnum1&bnum2)<<endl;
    cout << bitset<6>(bnum1|bnum2)<<endl;
    cout << bitset<6>(bnum1^bnum2)<<endl;
    cout << bitset<6>(~bnum1)<<endl;
    cout << bitset<6>(~bnum2)<<endl;


}