#include <iostream>
#include <vector>
using namespace std;
int ** pascal;
int main()
{  
    int n, k;
    cin >> n >> k;
    pascal = new int*[n];
    for(int i = 0; i < n; i++)
    {
        int * part = new int [i+1];
        for(int j = 0; j < i+1; j++)
        {
            if(j == 0 ){
                part[j] = 1;
            }
            else if(j == i) part[j] = 1;
            else part[j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
        pascal[i] = part;
        
    }
    cout << pascal[n-1][k-1];
}