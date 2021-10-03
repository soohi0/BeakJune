#include <iostream>

using namespace std;

int n;
int m;
int from;
int to;
void printarr(int * arr)
{
    for(int i = 0 ; i < 9 ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    cin >> n;
    int * people = new int [n];

    cin >> from >> to ;
    from = from-1;
    to = to - 1;
    cin >> m;
    for(int i = 0 ; i < m; i++)
    {
        people[i] = -1;
    }
    for(int i = 0; i < m; i++)
    {
        int parent, kid;
        cin >> parent >> kid;
        parent = parent-1;
        kid = kid - 1;
        people[kid] = parent;
    }
    printarr(people);
    int tosparent = -2;
    int fromsparent = -3;
    int cnt = 1;
    int idx = 0;
    while(tosparent != fromsparent)
    {


        tosparent = people[to];
        fromsparent = people[from];
        cout << "tosparent : " << tosparent << endl;
        cout << "fromsparent : " << fromsparent << endl;
        cout << "to : " << to << endl;
        if(fromsparent == to){
            break; // cnt
        }
        if(tosparent != fromsparent)
        {
            fromsparent = people[fromsparent];
            cnt ++;
        }
        else{
            cnt ++;
            break;
        }
        if(idx > n)
        {
            cnt = -1;
            break;
        }
        idx++;

    }
    cout << cnt;

}