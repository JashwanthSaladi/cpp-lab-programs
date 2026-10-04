#include<iostream>
using namespace std;
class Demo {
	public:
		void display() {
			cout<<"Display with no arguments"<<endl;
		}
		void display(int num) {
			cout<<"Display with number: "<<num<<endl;
		}
		void display(string name) {
			cout<<"Display with name: "<<name<<endl;
		}
};
main()
{
	Demo obj;
	obj.display();
	obj.display(19);
	obj.display("Jashu");
	return 0;
}
