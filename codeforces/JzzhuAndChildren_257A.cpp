#include <iostream>
using namespace std;

int main() {	
	int r = 0, n = 0,  c = 0, last = 0, p = 0, i = 0;
	
	cin>>n>>c;
	
	while(n--){
		cin>>r;
		i++;
		if(r%c == 0){
			p = r/c;
		}else{
			p = (r/c) + 1;
		}
		
		if(p>last){
			last = i;
		}
	}
	
	cout<<last<<endl;


	return 0;
}