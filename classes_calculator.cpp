// Basic Practice of Class Working 
#include<iostream>
using namespace std;
class calculator{
	private:
		float first,second;
	public:
		void input(){
			cout<<"Enter First Number: ";
			cin>>first;
			cout<<"Enter Secone Number: ";
			cin>>second;
			mul(first,second);
			div(first,second);
			add(first,second);
			sub(first,second);
		}
		void mul(int a,int b){
				cout<<endl<<"Multiply = "<<a*b;
		}
		void div(float a,float b){
				cout<<endl<<"Divide = "<<a/b;
		}
		void add(int a,int b){
				cout<<endl<<"ADD = "<<a+b;
		}
		void sub(int a,int b){
				cout<<endl<<"Subtract = "<<a-b;
		}	
};


int main(){
	calculator calc;
	calc.input();
	
}










