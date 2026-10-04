#include<iostream>
using namespace std;
main() {
	int a,b,c;
	cout<<"Enter the values ";
	cin>>a>>b>>c;
	if(a>=b && a>=c) {
		cout<<"a is bigger"<<endl;
	}
	else if(b>=a && b>=c) {
		cout<<"b is bigger"<<endl;
	}
	else {
		cout<<"c is bigger"<<endl;
	}
}
