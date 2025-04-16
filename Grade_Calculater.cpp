// Enter Number of Students & Number of Courses
// Enter Number of Each Courses
// Average of Each Student Will Display Next
#include <iostream>
#include <vector>
using namespace std;

int num_stu, num_crs;
float avg,sum=1;
void info();

class stad{
    public:
        string std_name;
        vector<float> grade;        
};

void data(int std, int crs,vector<stad> &students) {
    for (int i = 1; i <= std; i++) {
        stad studenti;
        studenti.grade.resize(crs);  
        cout << "---------------------------------------------------------" << endl;
        cout << "Enter Student Name: ";
        getline(cin >> ws, studenti.std_name);
        cout << "Enter Grades For " << studenti.std_name << ":" << endl;
		
        for (int j = 0; j < crs; j++){
        	

            cout << "Grade for Course " << j + 1 << ": ";
            cin >> studenti.grade[j];
                if (studenti.grade[j] <0){
                	cout << "Input is Invalid! Enter Again: ";
                	break;                
				} 
			
            }  
            students.push_back(studenti);
		      
        }   
		 
}
void calculation(const vector<stad> &students) {
    for (int i = 0; i < students.size(); ++i) {
        float sum = 0;
        for (int j = 0; j < students[i].grade.size(); ++j) {
            sum += students[i].grade[j];
        }
        float avg = sum / num_crs;
        cout << "Average grade for " << students[i].std_name << ": " << avg << endl;
    }
}

int main(){
	info();
	vector<stad> students;
	data(num_stu,num_crs,students);
	calculation(students);
	
	
	return 0;
}					


void info(){
	cout<<"Enter Number Of Students: ";
	b:
	cin>>num_stu;
	try{
		(num_stu<0)?throw 1: throw 0;
	}catch(int po){
		if(po){
			cout<<endl<<"Number of Students is InValid! "<<endl<<"Enter Again:";
			goto b;
		}		
	}
	cout<<endl<<"Enter Number Of Courses: ";
	a:
	cin>>num_crs;
	try{
		(num_crs<0)?throw 1: throw 0;
	}catch(int p){
		if(p){
			cout<<endl<<"Number of Courses is InValid! "<<endl<<"Enter Again:";
			goto a;
		}		
	}
}







