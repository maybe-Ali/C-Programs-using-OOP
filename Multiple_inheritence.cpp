// Practice Multiple Inheritance 
#include<iostream>
using namespace std;
 
class person{
	public:
		string name;
		int age;	
};
class worker{
	public:	
		string dept;
		string role;	
};
class Employee:public person,public worker{
		int salary;
		int id;
	public:
		
		void info(){
			cout<<endl<<"Enter Name: ";
			cin>>name;
			cout<<endl<<"Enter Age: ";
			cin>>age;
			cout<<endl<<"Enter Department: ";
			cin>>dept;
			cout<<endl<<"Enter Role: ";
			cin>>role;
			cout<<endl<<"Enter Salary: ";
			cin>>salary;
			cout<<endl<<"Enter Id: ";
			cin>>id;			
		}
		void display(){
			cout<<endl<<"Name: "<<name;
			cout<<endl<<"Age: "<<age;
			cout<<endl<<"Department: "<<dept;
			cout<<endl<<"Role: "<<role;
			cout<<endl<<"Salary: "<<salary<<"K";
			cout<<endl<<"Id: "<<id;	
		}
		
};

int main(){
	Employee emp1;
	emp1.info();
	system("cls");
	emp1.display();	
}










