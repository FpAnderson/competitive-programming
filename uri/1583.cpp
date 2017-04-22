#include <iostream>
using namespace std;
#include <vector>

int n = 0, m = 0, c = 0;

vector < vector <char> > mat;
vector < vector <bool> > visitado;

void flood(int x, int y){
		
	if(x < 0 || x >= n || y >= m || y < 0){
		return;
	}
	if(mat[x][y] == 'X' ){
		return;
	}
	
	if(visitado[x][y]){
		return;
	}
	
	mat[x][y] = 'T';
	visitado[x][y] = 1;
	
	flood(x+1, y);
	flood(x-1, y);
	flood(x, y+1);
	flood(x, y-1);
}


int main() {
	
	int r = 0, aux = 0, t = 0, pox = 0, poy = 0;
	char a;
	
	cin>>n>>m;
	
	while(n&&m){
		mat = vector < vector <char> > (n + 1);
		visitado = vector < vector <bool> > (n + 1);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin>>a;
				mat[i].push_back(a);
				visitado[i].push_back(0);
			}
		}
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(!visitado[i][j] && mat[i][j] == 'T'){
					flood(i, j);
				}
			}
		}
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cout<<mat[i][j];
			}
			cout<<endl;
		}
		
		mat.clear();
		cin>>n>>m;
		cout<<endl;
	
	}
	
	return 0;
}