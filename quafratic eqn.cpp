#include<iostream>
#include<cmath>
using namespace std;
main() {
	int a,b,c,d,r1,r2;
	cout<<"Enter a,b,c values: ";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	r1=(-b+sqrt(d))/2*a;
	r2=(-b-sqrt(d))/2*a;
	cout<<"The root 1 is: "<<r1;
	cout<<"\nThe root 2 is: "<<r2;
	if(d>0) {
		printf("\nRoots are real");
	}
	else if(d==0) {
		printf("\nRoots are equal");
	}
	else {
		printf("\nRoots are imaginary");
	}
}
