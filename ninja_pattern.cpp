// *   * * *
// *   *
// * * * * *
//     *   *
// * * *   *




#include<iostream>
using namespace std;
int main()
{
	int r=1;
	while(r>0)
	{
		if(r==1)
		{
			int s=1;
			while(s<=5)			
			{
				if(s==1 || s>=3)
				{
					cout<<"* ";
					
				}
				else if (s==2){
					cout<<"  ";
				}
				s++;
				
			}
			cout<<endl;
		}
		
		else if(r==2)
		{
			int s=1;
			while(s<=5)			
			{
				if(s==1 || s==3)
				{
					cout<<"* ";
					
				}
				else if (s==2 || s==4 || s==5){
					cout<<"  ";
				}
				s++;
				
			}
			cout<<endl;
		}
		else if(r==3)
		{
			int s=1;
			while(s<=5)			
			{
				cout<<"* ";
				s++;
			}
			cout<<endl;
		}
		
		else if(r==4)
		{
			int s=1;
			while(s<=5)			
			{
				if(s==3 || s==5)
				{
					cout<<"* ";
					
				}
				else if (s==1 || s==2 || s==4){
					cout<<"  ";
				}
				s++;
				
			}
			cout<<endl;
		}
		
		else if(r==5)
		{
			int s=1;
			while(s<=5)			
			{
				if(s==4)
				{
					cout<<"  ";
					
				}
				else if (s<4 || s>4){
					cout<<"* ";
				}
				s++;
				
			}
			cout<<endl;
		}
		
		
		
		r++;
	}
	
	return 0 ;
}