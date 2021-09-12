#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
 
using namespace std;
 
string arr="0123456789ABCDEF";
int main()
{
    int N,M;
    vector<char> ans(40);
    scanf("%d %d",&N,&M);
    int cnt=0;
    if(N==0){
        printf("0");
        return 0;
    }
    while(N){
        ans[cnt++]=arr[N%M];
        N=N/M;
    }
    for(int i=cnt-1;i>=0;i--){
        printf("%c",ans[i]);
    }
    
}