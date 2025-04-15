// Cinema Ticket Management System
// WorkFlow: 
// 1) Select Cities
// 2) Select Movies
// 3) pay Price (as Mentioned)
// 4) Enter your Name & Phone-Number
// 5) Select Timming Slots
// 7) Your Ticket Will be generated & Save Into your Local Storage

#include<iostream>
#include<fstream>
#include<string>
#include<time.h>
#include<cstdlib>
using namespace std;
int tim,opt,m,amnt,n,t,num;
string ph,mov,loc,nm;
//char nm[50];
void time();
void name();
void tic();
void tic_file();
void price(string x,int pr);
int main(){
srand(time(0));
num=rand()%500;
a:
cout<<"------------------------------"<<endl;
cout<<"| SELECT MOVIE THEATER: |"<<endl;
cout<<"------------------------------"<<endl;
cout<<endl<<endl;
cout<<"Enter 1 to Watch Movie in LAHORE"<<endl;
cout<<"Enter 2 to Watch Movie in ISLAMABAD"<<endl;
cout<<"Enter 3 to Watch Movie in KIRACHI"<<endl;
cin>>opt;
cout<<endl<<endl;
switch(opt){
case 1:
loc="LAHORE";
cout<<"-----------------------------------------------"<<endl;
cout<<"} SELECT MOVIE IN LAHORE CENIMA |"<<endl;
cout<<"-----------------------------------------------"<<endl;
cout<<endl<<endl;
cout<<"Enter 1 to Watch \'Maula Jutt\'"<<endl;
cout<<"Enter 2 to Watch \'Barbie\'"<<endl;
cin >>m;
cout<<endl<<endl;
switch(m){
case 1:
price("Maula Jutt",10);
break;
case 2:
price("Barbie",15);
break;
}
break;
case 2:
loc="ISLAMABAD";
cout<<"-----------------------------------------------"<<endl;
cout<<"| SELECT MOVIE IN ISLAMABAD CENIMA |"<<endl;
cout<<"-----------------------------------------------"<<endl;
cout<<endl<<endl;
cout<<"Enter 1 to Watch \'Jawani Phir nahin Ani\'"<<endl;
cout<<"Enter 2 to Watch \'Joy-Land\'"<<endl;
cin >>m;
cout<<endl<<endl;
switch(m){
case 1:
price("Jawani Phir nahin Ani",20);
break;
case 2:
price("Jo-Land",30);
break;
}
break;
case 3:
loc="KIRACHI";
cout<<"-----------------------------------------------"<<endl;
cout<<"| SELECT MOVIE IN KIRACHI CENIMA |"<<endl;
cout<<"-----------------------------------------------"<<endl;
cout<<endl<<endl;
cout<<"Enter 1 to Watch \'OpenHiemer\'"<<endl;
cout<<"Enter 2 to Watch \'Devdass\'"<<endl;
cin >>m;
switch(m){
case 1:
price("OpenHiemer",50);
break;
case 2:
price("Devdass",19);
break;
}
break;
default:
cout<<"Invalid Number!, Enter Number Again: ";
goto a;
}
cout<<"Data Saved!";
ofstream onFile;
onFile.open("C:\\Users\\SMART\\Desktop\\File.txt",ios::app);
onFile<<"-----------------------------------------------"<<endl;
onFile<<"| YOUR TICKET |"<<endl;
onFile<<"-----------------------------------------------"<<endl;
onFile<<"TICKET NUMBER:: "<<num<<endl;
onFile<<"CENIMA LOCATION:: "<<loc<<endl;
onFile<<"Your Name: "<<nm<<endl;
onFile<<"MOVIE Name: "<<mov<<endl;
onFile<<"MOVIE Time: "<<tim<<":00PM"<<endl;
onFile<<"Contact Number: "<<ph<<endl;
onFile<<endl;
onFile.close();
return 0;
}
void price(string x,int pr){
mov=x;
cout<<"Price of "<<x<<" is : " <<pr<<" $"<<endl;
cout<<"Enter Amount: ";
b:
cin>>amnt;
cout<<endl;
if(amnt!=pr){
cout<<"Enter Amount again: ";
goto b;
}else{
name();
}
}
void name(){
cout<<endl;
cout<<"Enter Name: ";
getline(cin>>ws,nm);
// cin>>nm;
cout<<"Enter Phone number:";
ph:
cin>>ph;
cout<<endl<<endl;
if(ph.length()!=11){
cout<<"Invalid Number!, Enter Again:";
goto ph;
}else{
time();
}
}
void time(){
g:
cout<<"-----------------------------------------------"<<endl;
cout<<"             | SELECT TIME |"<<endl;
cout<<"-----------------------------------------------"<<endl;
cout<<endl<<endl;
cout<<"Enter 1 to Watch Movie at \'8:00PM\'"<<endl;
cout<<"Enter 2 to Watch Movie at \'10:00PM\'"<<endl;
cin>>t;
if(t==1){
tim=8;
}
else if(t==2){
tim=10;
}
else{
cout<<"Invalid Input!Enter again";
goto g;
}
 tic();
}
void tic(){

 cout<<endl<<endl;
 cout<<"-----------------------------------------------"<<endl;
 cout<<"            - YOUR TICKET -"<<endl;
 cout<<"-----------------------------------------------"<<endl;
 cout<<endl;
 cout<<"TICKET NUMBER:: "<<num<<endl;
 cout<<"CENIMA LOCATION:: "<<loc<<endl;
 cout<<"Your Name: "<<nm<<endl;
 cout<<"MOVIE Name: "<<mov<<endl;
 cout<<"MOVIE Time: "<<tim<<":00PM"<<endl;
 cout<<"Contact Number: "<<ph<<endl;

}
