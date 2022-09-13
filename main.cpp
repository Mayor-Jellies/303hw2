#include <iostream>


using namespace std;
///recursive gcd using euclid algo
int gcd(int p, int q){
	if(q == 0)
		return p;
	else
		return gcd(q, p % q );
}

int main() {
	int p;
	int q;
	cout<<"p value:"<<endl;
	cin>>p;
	cout<<"q value"<<endl;
	cin>>q;

	cout<<"GCD("<<p<<","<<q<<")="<<gcd(p,q)<<endl;

	cout<<"repeat? (y,n)"<<endl;
	char temp;
	cin>>temp;
	if (temp=='y'||temp=='Y')
		main();
	else
		return 0;
}
