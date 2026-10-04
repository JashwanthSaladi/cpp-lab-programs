#include<iostream>
using namespace std;
class Father {
	public:
		void fatherMethod() {
			cout<<"This is father class"<<endl;
		}
};
class Mother {
	public:
		void motherMethod() {
			cout<<"This is mother class"<<endl;
		}
};
class Child: public Father, public Mother {
	public:
		void childMethod() {
			cout<<"This is child class"<<endl;
		}
};
main() {
	Child c;
	c.childMethod();
	c.fatherMethod();
}
