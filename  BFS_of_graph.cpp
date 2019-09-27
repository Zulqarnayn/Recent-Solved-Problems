#include<bits/stdc++.h>
using namespace std;
bool vis[1001];
vector<int> g[1001];
void bfs(int s,vector<int> adj[],bool vis[]);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        memset(g,0,sizeof g);
        memset(vis,false,sizeof vis);
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
        }
        bfs(1,g,vis);
        cout<<endl;
    }
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* You have to complete this function*/


void bfs(int s,vector<int> adj[],bool vis[])
{
    queue < int > q;
    q.push(s);
    vis[s] = true;
    vector <int> :: iterator it;
    while(!q.empty()){
        int child = q.front(); q.pop();
        cout << child << ' ';
        for(it = adj[child].begin(); it != adj[child].end(); it++){
            if(!vis[*it]){
                vis[*it] = true;
                q.push(*it);
            }
        }    
    }
}
