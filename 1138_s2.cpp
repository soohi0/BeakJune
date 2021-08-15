#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int * arr = new int [N];
    int * result = new int [N];

    for(int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        arr[i] = n;
        result[i] = N;
    }
    result[arr[0]] = 1;
    for(int i = 1; i < N; i++)
    {
        int morethan = arr[i];
        //cout << " morethan : " <<morethan << endl;
        bool on = true;
        for(int j = 0; j < N; j++)
        {
            
            if(morethan == 0 && on)
            {
                //cout << "i : " << i << " j : " << j << " result : " << result[j] << endl;
                if(result[j] >= i+1)
                {
                    result[j] = i+1;
                    on = false;

                }
                
            }
            else{
                if(result[j] > i+1)
                {
                    morethan--;
                }
            }
            
        }
    }
    for(int i = 0; i < N; i++)
    {
        cout << result[i] << " " ;
    }
}