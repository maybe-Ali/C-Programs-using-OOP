// Initializing Values Through Class Constructor

#include<iostream>
using namespace std;

class laptop{
		string brand;
		string model;
		string name;
		int price;
	public:
		laptop(string b,string m,string n,int p){
			brand = b;
			model = m;
			name = n;
			price = p;
		}
		laptop(laptop &obj){
			name = "";
			model = obj.model;
			brand = obj.brand;
			price = obj.price;
		}
		void setName(){
			cout<<"Enter Details For Laptop";
			cout<<endl<<"Enter Owner Name: ";
			getline(cin,name);
			cout<<endl<<"Enter Laptop Price: ";
			cin>>price;
		}	
		
		void displayInfo(){
			cout<<endl<<"Name = "<<name;
			cout<<endl<<"Brand Name ="<<brand;
			cout<<endl<<"Model Name ="<<model;
			cout<<endl<<"Price = "<<price;
		}
		void avgprice(laptop &obj1){
			cout<<endl<<"~ Average Price Of Laptop ~";
			cout<<endl<< float((obj1.price+price)/2);
		}

};
int main(){
	laptop lap1("Hp","2021","Ali",2300);
	
	laptop lap2(lap1);
	lap2.setName();
	lap1.displayInfo();
	cout<<endl;
	lap2.displayInfo();
	lap1.avgprice(lap2);
}














