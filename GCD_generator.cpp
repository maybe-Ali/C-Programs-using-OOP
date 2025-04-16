#include<iostream>
using namespace std;
int main(){
	int fnum=0,snum=0;
	int n=0,d=0,r=0,q=0;
	cout<<"Enter First Number:-"<<endl;
	cin>>fnum;
	cout<<"Enter Second Number:-"<<endl;
	cin>>snum;
	cout<<"GCD for ("<<fnum<<" , "<<snum<<") is:-"<<endl;
	
	if(fnum>snum){
		n=fnum;
		d=snum;
	}
	else{
		n=snum;
		d=fnum;
	}
	while(r>=0){
		q = n/d;
		r = n%d;
		
		n=d;
		if(r!=0){
			d=r;
		}else{
			break;
		}			
	}
	cout<<d<<endl;
	return 0;
}
