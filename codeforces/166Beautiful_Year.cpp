#include <iostream>
using namespace std;

int main() {
	int m = 0 , c = 0, d = 0, u = 0, number = 0, r = 0;
	
	cin>>number;
	
	while(m == c || m == d || m == u || c == d || c == u || d == u){
		number++;
		m = number/1000;
		c = (number-(m*1000))/100;
		d = (number-(m*1000+(c*100)))/10;
		u = (number-(m*1000+(c*100+(d*10))));
	}
	r = (m*1000+(c*100+(d*10+(u))));
	
	cout<< r << endl;
	
	return 0;
}