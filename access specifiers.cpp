//illustrate the default arguments and access specifiers
#include<iostream>
using namespace std;
class Student 
{
	private:
		int marks;
	public:
		void setMarks(int m=60) {
			marks=m;
		}
		void display() {
			cout<<"marks: "<<marks;
		}
};
main() 
{
	Student s1,s2;
	s1.setMarks();
	cout<<"Student 1: ";
	s1.display();
	s2.setMarks(90);//parameter
	cout<<"\nStudent 2: ";
	s2.display();
}
