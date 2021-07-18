#include <iostream>
#include<cstring>

using namespace std;

char a[100001];
char b[100001];

int main() {
    cin >> a >> b;
    for(int i = 0; i <strlen(a); i++)
    {
        if(a[i] == '1' && b[i] == '1'){
            cout << '1';
        }
        else cout << '0';
    }
    cout << endl;
    for(int i = 0; i <strlen(a); i++)
    {
        if(a[i] == '1' || b[i] == '1'){
            cout << '1';
        }
        else cout << '0';
    }
    cout << endl;
    for(int i = 0; i < strlen(a); i++)
    {
        if(a[i]!= b[i]){
            cout << '1';
        }
        else cout << '0';
    }
    cout << endl;
    for(int i = 0; i <strlen(a); i++)
    {
        if(a[i] == '1'){
            cout << '0';
        }
        else cout << '1';
    }
    cout << endl;
    for(int i = 0; i <strlen(b); i++)
    {
        if(b[i] == '1'){
            cout << '0';
        }
        else cout << '1';
    }
    cout << endl;

}