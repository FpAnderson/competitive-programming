#include <iostream>
using namespace std;
#include <map>


int main() {	
	int m = 0, n = 0, find = 0, t1 = 0, t2 = 0, c = 0;
	
	map <int , int> mp;
	
	cin>>n;
	
	while(n--){
		cin>>m;
		c++;
		mp[m] = c;
	}
	
	cin>>n;
	
	while(n--){
		cin>>find;
		t1 += mp[find];
		t2 += c - (mp[find] - 1);
	}
	cout<<t1<<" "<<t2<<endl;
	
	return 0;
}