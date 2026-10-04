#include<iostream>
using namespace std;
main() {
	int a,b;
	cout<<"Enter a,b values: ";
	cin>>a>>b;
	int sum=a+b;
	int sub=a-b;
	int mul=a*b;
	int div=a/b;
	int mod=a%b;
	cout<<"Addition is: "<<sum;
	cout<<"\nSubtraction is: "<<sub;
	cout<<"\nMultiplication is: "<<mul;
	cout<<"\nDivision is: "<<div;
	cout<<"\nModulus is: "<<mod;
}
