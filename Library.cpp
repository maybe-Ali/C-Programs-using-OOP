#include<iostream>
using namespace std;
class book{
	public:
	string title;
	string autherName;
	int year;
	
		book(string t,string n,int y){
			autherName=n;
			title=t;
			year=y;
		}
		

};
class libraryBook:public book{
	int shelf;
	string  Available;
	public:
		libraryBook(string t,string n,int y,int sh,string bol):book(t,n,y){
			Available=bol;
			shelf=sh;
		}
		void display(){
			cout<<endl<<"Title: "<<title;
			cout<<endl<<"Auther-Name: "<<autherName;
			cout<<endl<<"Publication Year: "<<year;
			cout<<endl<<"Shelf Number: "<<shelf;
			cout<<endl<<"Available: "<<endl;
			cout<<"      --"<<Available<<"--   "<<endl;
		}
		
		void check() {
        if (Available == "Available") {
            Available = "Booked";  
            cout << "The book has been booked." << endl;
        } else {
            Available = "Available"; 
            cout << "The book has been returned and is now available." << endl;
        }
    }
	
		
};

int main(){
	int choice;
	libraryBook book1("c++","M.Ali",2010,12,"Available");
	libraryBook book2("Java","Smith",2020,12,"Available");
	libraryBook book3("Kotlin","Paul",1999,12,"Available");
	
	while(true){
		cout<<1<<")"<<endl;
		book1.display();
		cout<<2<<")"<<endl;
		book2.display();
		cout<<3<<")"<<endl;
		book3.display();
		cout<<"Enter Your Choice To book The Article: "<<endl;
		cout<<"Press 0 to exit";
		cin>>choice;
		if(choice==0){
			return 0;
		}
		switch(choice){
			case 1:
				book1.check();
				break;
			case 2:
				book2.check();
				break;
			case 3:
				book3.check();
				break;
			default:
				cout<<"Wrong Input!";
		}
	}
	
	
}