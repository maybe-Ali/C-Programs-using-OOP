//     *
//   * * *
// * * * * *
//   * * *
//     *
 

#include<iostream>
using namespace std;
int main()
{
	int a=1;
	while(a<=5)	
	{
		if(a<=7)
		{
			int z=5-a;
			while(z>0)
			{
				cout<<" ";
				z--;				
			}	
			int v=1;		
			while(v<=a)
			{
				cout<<"* ";			
				v++;
			}			
			cout<<endl;			
		}
		a+=2;					
	}
	a=3;
	int l=1;
	while(a>=1)	
	{
			int z=a-l;
			while(z>0)
			{
				cout<<" ";
				z--;				
			}	
			int v=1;		
			while(v<=a)
			{
				cout<<"* ";
							
				v++;
			}
					
			cout<<endl;			
		
		a-=2;
		cout<<' '<<' '<<' '<<' ';	
							
	}

	return 0;
}