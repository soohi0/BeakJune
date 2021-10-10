#include <iostream>

using namespace std;

int arr[100];

int Makebinary(unsigned long long num,int pos)
{
    if(num==0) return pos;
    arr[pos]=num%2;
    return Makebinary(num/2,pos+1);
}

unsigned long long mypow(int num,int b)
{
    unsigned long long res = 1;
    for(int i=1;i<=b;i++) res = res * num;
    return res;
}
int main()
{
    unsigned long long n;
    cin >> n;
    int cnt = Makebinary(n,0);
    unsigned long long res = 0;

    for(int i= 0;i<cnt;i++)
    {
        res += mypow(3,i) * arr[i];
    }

    cout << res;
    return 0;
}
