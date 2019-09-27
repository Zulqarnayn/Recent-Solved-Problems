#include <iostream>
using namespace std;

int t;
int n, e, x, y;

int Graph[252][252], g[252];
int cnt;


int main(){

    cin >> t;
    while(t--){
        cin >> n >> e;

        for(int i = 0; i < 250; i++){
            for(int j = 0; j < 250; j++){
                Graph[i][j] = 0;
            }
        }
        for(int i =  0; i < 250; i++)
                g[i] = 0;

        for(int i = 0; i < e; i++){
            cin >> x >> y;
            if(Graph[x][y] != 1)
                g[x]++;
            Graph[x][y] = 1;
        }
        
        cnt = 0;
        for(int i = 0; i < n; i++){
            cnt += g[x];
        }
        cout << cnt << endl;
    }

}