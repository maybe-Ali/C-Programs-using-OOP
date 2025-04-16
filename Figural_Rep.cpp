// Code Process Number Enter By User And Represnt in English Fomart
// 1098 = one Thousand and ninty eight only.
// Input Range (0-99,999)
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
string A=" and ",o="Only",tho=" Thousand ";
int num , dig1 , dig2 , dig3 , dig4 , dig5,dig20,nam,ch;
string fig(int n,int d2,int d1,int m,int t,int tt);
int main(){
	int num;
	a:
	cout<<"Enter Number:"<<endl;
	cin>>num;	
	nam=num;
	if(num>99999 || num<0){
		cout<<"Invalid Input (Range 0 to 99,999):"<<endl;
		goto a;
	}	
	dig1 = num % 10;
	num /= 10;
	dig2 = num % 10;
	num /= 10;
	dig3 = num % 10;
	num /= 10;
	dig4 = num % 10;
	num /= 10;
	dig5 = num % 10;
	num /= 10;
	dig20 = nam%100;	
	cout<<fig(dig20,dig2,dig1,dig3,dig4,dig5)<<endl<<endl;
	cout<<"Press 1 to Enter Again:"<<endl;
	cin>>ch;
	if(ch){
		goto a;
	}
	return 0;
}
string fig(int n,int d2,int d1,int m,int t,int tt){
		string g[] ={"zero ", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine ",
             			"ten ", "eleven ", "twelve ", "thirteen ", "fourteen ", "fifteen ", "sixteen ", "seventeen ",
                			"eighteen", "nineteen"};
        string p[]={"","","Twenty ","Thirty ","Fourty ","Fifty ","Sixty ","Seventy ","Eighty ","Ninty "};
        string h[]={"","One Hundered ","Two hundered ","Three Hundered ","Four Hundered ","Five Hundered ","Six Hundered ","Seven Hundered "
					,"Eight Hundered ","Nine Hundered "};		
		string th[]={"","One Tousand ","Two Tousand ","Three Tousand ","Four Tousand ","Five Tousand ","Six Tousand ","Seven Tousand ",
						"Eight Tousand ","Nine Tousand "};
		string tk[]={"","Ten Tousand ","Twenty Tousand ","Thirty Tousand ","Fourty Tousand ",
							"Fifty Tousand ","Sixty Tousand ","Seventy Tousand ",
							"Eighty Tousand ","Ninety Tousand "};
		if(tt!=0 && tt<10){
			if(t==0){
				if((t==0 && m==0) && (n==0)){
				return tk[tt]+o;
			}
			else if(m!=0 && n==0 ){
				return tk[tt]+A+h[m];
			}
			else if(m==0 && n!=0){
				if(n<19){
					return tk[tt]+A+g[n];
				}
				else if(n>19 && d1==0){
					return tk[tt]+A+p[d2];
				}
				else{
					return tk[tt]+A+p[d2]+g[d1];
				}
			}
			else if(m!=0 && n<19){
					return tk[tt]+h[m]+A+g[n];
				}
				else if(n>19 && d1==0){
					return tk[tt]+h[m]+A+p[d2];
				}
				else {
					return tk[tt]+h[m]+A+p[d2]+g[d1];
				}
		}	
			else {
				if( m==0 && n==0){
				return p[tt]+g[t]+tho+o;
			}
			else if(m!=0 && n==0 ){
				return p[tt]+g[t]+tho+A+h[m];
			}
			else if(m==0 && n!=0){
				if(n<19){
					return p[tt]+g[t]+tho+A+g[n];
				}
				else if(n>19 && d1==0){
					return p[tt]+g[t]+tho+A+p[d2];
				}
				else{
					return p[tt]+g[t]+tho+A+p[d2]+g[d1];
				}
			}
			else if(m!=0 && n<19){
					return p[tt]+g[t]+tho+h[m]+A+g[n];
				}
				else if(n>19 && d1==0){
					return p[tt]+g[t]+tho+h[m]+A+p[d2];
				}
				else {
 
					return p[tt]+g[t]+tho+h[m]+A+p[d2]+g[d1];
				}
			}
		}
		if(t<10 && t!=0){
			if(m==0 && n==0){
				return th[t]+o;
			}
			else if(m!=0 && n==0){
				return th[t]+A+h[m];
			}
			else if(m==0 && n!=0){
				if(n<19){
					return th[t]+A+g[n];
				}
				else if(n>19 && d1==0){
					return th[t]+A+p[d2];
				}
				else{
					return th[t]+A+p[d2]+g[d1];
				}
			}
			else if(m!=0 && n<19){
					return th[t]+h[m]+A+g[n];
				}
				else if(n>19 && d1==0){
					return th[t]+h[m]+A+p[d2];
				}
				else {
					return th[t]+h[m]+A+p[d2]+g[d1];
				}
			}		
		 if(m<10 && m!=0){
			if((d1==0 && d2==0)){
				return h[m];	
			}
			else if(n<19){
				return h[m]+A+g[n];
			}
			else if(n>19 && d1==0){
			return h[m]+A+p[d2];
			}
			else{
				return h[m]+A+p[d2]+g[d1];
			}
		}		
        if(n>19 && n<100){       	
        	if(d1==0){
        		return p[d2];
			}
        	else{
        		return p[d2]+g[d1];
			}
		}
		else if(n<20){
			return g[n];
		}
	
}












