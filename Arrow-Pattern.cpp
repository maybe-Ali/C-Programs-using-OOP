// in this code i'm Making Pattern like bellow 

// **
//  ***
//   ****
//    *****
//     ******
//    *****
//   ****
//  ***
// **

#include<iostream>
using namespace std;
int main()
{
	int ow=9,i,s=2,e=1,w,p=5,l,m=5;
	while(e<=ow)
	{
	
		if(e<=5)
		{
			 
			 i=s-1;
			while(i>1)
			{
				cout<<" ";
				
				i--;
			}
			int o=1;
			while(o<=s)
			{
				
				cout<<"*";
				
				o++;
			}
					
			cout<<endl;			
		}
		else if(e>5)
		{
			
			w=p-1;
			while(w>1)
			{
				cout<<" ";
				
				w--;
			}
		l=1;
			while(l<=m)
			{
				
				cout<<"*";
				
				l++;
			}
			
					
			cout<<endl;
			m--;	
			p--;
		}		
		s++;	
		e++;
	}
	
	return 0;
}