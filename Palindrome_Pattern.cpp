//      1
//     121
//    12321
//   1234321
//  123454321


#include <iostream>
using namespace std;
int main(){
	int row,space,y=1,e=1;
	cout<<"Enter Number of Rows:";
	cin>>row;
	y=row;
	while(y>0)
	{
	space=y-1;
	while(space>=0)
	{
		cout<<" ";
		space--;
	}
	int k=1;
	while(k<=e)
	{
		cout<<k;
		k++;
	}
	int h;
	h=e-1;
	while(h>0)
	{
		cout<<h;
		h--;
	}
	
	cout<<endl;
	y--;
	e++;
	
}
	return 0;
	
}