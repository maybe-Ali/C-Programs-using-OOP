// CHecking Whether Number Is Prime or Not using Arrays:


#include<iostream>
using namespace std;
int main(){
	const int SIZE=5;
	int a[SIZE];
	int c=0,j;
	cout<<"Enter 5 Numbers: "<<endl;
	for(int i=0;i<SIZE;i++){
		cin>>a[i];
	}
	cout<<endl<<"Prime Numbers are: "<<endl;
	for(int i=0;i<SIZE;i++){
		j=2;		
		c=0;
		for(j=2;j<=a[i];j++){
			if(a[i]%j==0){
				c++;
			}
		}
		if(c==1){
			cout<<a[i]<<" ";
		}
		
	}
	return 0;
}