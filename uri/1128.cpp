#include <iostream>
using namespace std;
#include <vector>
#include <bitset>
#include <queue>

bitset<2000> visit;

vector < vector <int> > graph;

int bfs(int v, int c){

	queue <int> q;
	
	q.push(v);
	
	while(!q.empty()){
		
		int u = q.front();
		
		q.pop();
		
		vector<int> adj = graph[u];
		
		for(int i = 0; i < adj.size(); i++){
			int ad = adj[i];
			
			if(!visit[ad]){
				visit[ad] = true;
				q.push(ad);
				c++;
			}
			
		}
	}
	return c;
}

void addEdge(int v1, int v2, int w){
	if(w==1){
		graph[v1].push_back(v2);
	}else{
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}
}

int main() {
	
	int w = 0, n = 0, v1 = 0 , v2 = 0, m = 0, r = 0;
	
	cin>>n>>m;
	
	while(n&&m){
		
		visit.reset();
		graph = vector < vector <int> > (n + 1);
		
		for(int i = 0; i < m; i++){
			cin>>v1>>v2>>w;
			addEdge(v1, v2, w);
		}
		
		int v = 0, c = 0;
		
		for(int i = 1; i <= n ; i++){
			r = bfs(i, c);
			if(r==n){
				v++;
			}
			visit.reset();
			r=0;
		}
		
		if(v==n){
			cout<<1<<endl;
		}else{
			cout<<0<<endl;
		}
		
		v = 0;
		cin>>n>>m;
	}
	
	return 0;
}