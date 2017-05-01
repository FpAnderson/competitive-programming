#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n = 0, cap = 0, r = 0, c = 1;
	
	vector <int> ben, wt;
    
    cin>>n>>cap;
    
    while(n!=0 && cap != 0){
    
		int tab[cap+1], TIME = 0, RIDE = 0;
		
		r = n;
		
		while(r--){
			cin>>TIME>>RIDE;
			wt.push_back(TIME);
			ben.push_back(RIDE);
		}
    
	    for(int i = 0; i <= cap; i++)
	    	tab[i] = 0;
	    	
	    for(int i = 1; i <= cap; i++){
	    	for(int j = 0; j < n; j++){
	    		if(i >= wt[j]){
	    			if(ben[j] + tab[i - wt[j]] > tab[i]){
	    				tab[i] = ben[j] + tab[i - wt[j]];
	    			}
	    		}
	    	}
	    }
	    
	    cout<<"Instancia "<<c<<endl;
	    cout<<tab[cap]<<endl;
	    cout<<endl;
	    
    	cin>>n>>cap;
    	c++;
    	ben.clear();
    	wt.clear();
    }
    
    
	return 0;
}