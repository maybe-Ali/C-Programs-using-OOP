// University Management System.
// Using OOP(Object oriented Programming) Concepts.
// User Choice Driven Workflow of Code. 
// Code Overview:
// 1) Add Department Of University.
// 2) Show Department entered By User.
// 3) Enter Specific Department For:
// 		a) Add Teachers.
// 		b) Add Students.
// 		c) Add Courses.
// 		d) Display specific Function.

#include<iostream>
#include<string>
using namespace std;

class person{
	public:
		string name;
		string age;	
		
		person(){
			name="";
			age= "";
		}
		
		void setName(){
			cout<<"Enter Name: ";
			cin>>name;
			cout<<endl<<"Enter Age: ";
			cin>>age;
		}
};
class qualification{
	public:
		string degree;
		int experience;
		
		qualification(){
			degree="";
			experience = 0;			
		}
		
		void setQualification(){
			cout<<endl<<"Enter Degree: ";
			cin>>degree;
			cout<<endl<<"Enter Experience: ";
			cin>>experience;
		}
		
		void displayQualification(){
			cout<<endl<<"Degree = "<<degree<<" , Experience = "<<experience;
		}
	
	
};

class Teacher:public person, public qualification{
		string dept;
		string salary;
	public:
		Teacher(){
			dept = "";
			salary = "";
		}
		
		void AddTeacher(){			
			setName();
			cout<<endl<<"Enter Department of Teacher: ";
			cin>>dept;
			cout<<endl<<"Enter Salary: ";
			cin>>salary;
			setQualification();
			system("cls");
			cout<<endl;
			cout<<endl<<"--- Teahcer Added Successfully ---"<<endl;
		}
		
		void displayTeachers(){
			cout<<endl<<"Name = "<<name<<" , Age = "<<age<<endl;
			cout<<"Department = "<<dept<<" , Salary = "<<salary;			
		}
};

class Student:public person{
	string rollNum;
	public:
		Student(){
			rollNum = "";
		}
		
		void addStudent(){
			setName();
			cout<<endl<<"Enter Roll-Number: ";
			cin>>rollNum; 
			system("cls");
			cout<<endl;
			cout<<endl<<"--- Student Added Successfully ---"<<endl;
		}
		
		void displayStudents(){
			cout<<endl<<"Name = "<<name<<" , Age = "<<age<<" , Roll-Number = "<<rollNum<<endl;
		}
};
class Course{
	public:
		string crsName;
		string crsCode;
		
		Course(){
			crsName = "";
			crsCode = "";
		}
		
		void setCourse(){
			cout<<endl<<"Enter Course Name: ";
			cin>>crsName;
			cout<<endl<<"Enter Course Code: ";
			cin>>crsCode;
			system("cls");
			cout<<endl;
			cout<<"--- Course Added Successfully ---"<<endl;
		}
		
		void displayCourse(){
			cout<<endl<<"Course = "<<crsName<<" , Course Code = "<<crsCode<<endl;
		}
};
class Department{
	public:
		string dptName;
		
		Department(){
			dptName = "";
		}
		
		void addDept(){
			
			cout<<endl<<"Enter Department Name: ";
			cin.ignore();
			getline(cin,dptName);			
			cout<<endl<<"--- Department Added Successfully ---"<<endl;
		}
		
		string displayDept(){
			return dptName;
		}
};

class University{
	Department department[10];
	Teacher teacher[10];
	Student student[10];
	Course   course[10];
	
	public:
		
		int dptCount=0 , teacherCount =0 , studentCount = 0 , crsCount = 0;
		
		
		void AddDepartment(){
			if(dptCount<=10){
				system("cls");
				department[dptCount].addDept();
				dptCount++;				
			}
			else{
				system("cls");
				cout<<endl;
				cout<<endl<<"Limit Exceeded! No. Of Department Should Be Less Than 10."<<endl;
			}
		}			
			
		void AddTeacher(){
			if(teacherCount<=10){
				system("cls");
				teacher[teacherCount].AddTeacher();
				teacherCount++;
				
			}else{
				system("cls");
				cout<<endl;
				cout<<endl<<"Limit Exceeded! No. Of Teachers Should Be Less Than 10."<<endl;
			}
		}		
		
		void AddStudent(){
			if(studentCount<=10){
				system("cls");
				student[studentCount].addStudent();
				studentCount++;
				
			}else{
				system("cls");
				cout<<endl;
				cout<<endl<<"Limit Exceeded! No. Of Students Should Be Less Than 10."<<endl;
			}
		}
				
		void AddCourse(){
			if(crsCount<=10){
				system("cls");
				course[crsCount].setCourse();
				crsCount++;
				
			}else{
				system("cls");
				cout<<endl;
				cout<<endl<<"Limit Exceeded! No. Of Students Should Be Less Than 10."<<endl;
			}
		}
		
		void displayDpt(){
			if(dptCount!=0){
				
				for(int i=0;i<dptCount;i++){
					cout<<i+1<<") "<<department[i].displayDept()<<endl;
				}
			}
			else{
				
				cout<<endl<<"~  No Department Added Yet!  ~"<<endl;
			}
		}
		
		void DisplayTeacher(){
			if(teacherCount!=0){
				system("cls");
				cout<<endl;
				for(int i=0;i<teacherCount;i++){
					cout<<i+1<<") Teacher: ";
					teacher[i].displayTeachers();
					cout<<endl;
				}
			}
			else{
				system("cls");
				cout<<endl;
				cout<<endl<<"No Teacher Added Yet!"<<endl;
			}
		}
		
		void displayStudent(){
			if(studentCount!=0){
				system("cls");
				cout<<endl;
				for(int i=0;i<studentCount;i++){
					cout<<i+1<<") Student:";
					student[i].displayStudents();
					cout<<endl;
				}
			}
			else{
				system("cls");
				cout<<endl;
				cout<<endl<<"No Student Added Yet!"<<endl;
			}
		}
		
		void DisplayCourse(){
			if(crsCount!=0){
				system("cls");
				for(int i=0;i<crsCount;i++){
					cout<<i+1<<") Course: ";
					course[i].displayCourse();
					cout<<endl;
				}
			}
			else{
				system("cls");
				cout<<endl;
				cout<<endl<<"No Courses Added Yet!"<<endl;
			}
		}
		
		bool selecetedDpt(string dpt,int &index){
			if(dptCount<11 && dptCount!=0){
				for(int i=0;i<dptCount;i++){
					if(department[i].displayDept()==dpt){
						index =i;
						return 1;						
					}
					else{
					   return -1;
					}
				}
			}
		}
		
		
		
};



int main(){
	University uni;
	int choice;
	while(true){
		
		cout<<endl<<"-------- UNIVERSITY OF LAHORE MAIN MENU --------"<<endl;
		cout<<"1) ADD Department"<<endl;
		cout<<"2) Show Department"<<endl;
		cout<<"3) Enter Department"<<endl;
		cout<<"0) .Exit"<<endl;
		cout<<endl<<"Enter Your Choice: ";
		cin>>choice;
		if(choice==0){
			break;
		}
		switch(choice){
			case 1:
				uni.AddDepartment();
				break;
			case 2:
				system("cls");
				cout<<endl;
				cout<<endl<<"~ Department Details ~"<<endl;
				uni.displayDpt();
				break;
			case 3:
				{	
					system("cls");
					cout<<endl;			
					string DPTname;
					cout<<endl<<"Enter Department Name: ";
					cin.ignore();
					getline(cin,DPTname);
					int indx;
					int boolean = uni.selecetedDpt(DPTname,indx);
					if(boolean==1){
						int ch;
						while(true){
							
							cout<<endl<<"-------- "<<DPTname<<" Main Menu --------"<<endl;
							cout<<"1) ADD Teachers"<<endl;
							cout<<"2) ADD Students"<<endl;
							cout<<"3) ADD Course"<<endl;
							cout<<"4) Display All Teachers"<<endl;
							cout<<"5) Display All Students"<<endl;
							cout<<"6) Display All Courses"<<endl;
							cout<<"0) Go Back To Main Menu.."<<endl;
							cout<<"Enter Your Choice"<<endl;
							cin>>ch;
							if(ch==0){
								break;
							}
							
							switch(ch){
								case 1:
									uni.AddTeacher();
									break;
								case 2:
									uni.AddStudent();
									break;	
								case 3:
									uni.AddCourse();
									break;
								case 4:
									uni.DisplayTeacher();
									break;
								case 5:
									uni.displayStudent();
									break;
								case 6:
									uni.DisplayCourse();
									break;
								
									
								default:
									system("cls");
									cout<<endl;
									cout<<endl<<"Invalid Choice!";
									break;
							}
						}						
					}
					else{
						system("cls");
						cout<<endl;
						cout<<endl<<"Department Not Found!"<<endl;						
					}				
				}
				case 0:
					break;					
				default:
					cout<<endl<<"Invalid Choice!";
					break;
			}
	}
	return 0;
}
