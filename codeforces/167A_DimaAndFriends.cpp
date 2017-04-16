#include <iostream>
using namespace std;
#include <map>


int main() {	
	int r = 0, n = 0, t = 0, p = 0, c = 5, f = 0;
	
	cin>>r;
	f = r;
	
	while(r--){
		cin>>n;
		p += n;
	}
	f++;
	n = 0;
	while(c--){
		p++;
		t = p % f;
		if(t == 1){
			n++;
		}
	}
	
	cout<<5-n<<endl;
	
	return 0;
}