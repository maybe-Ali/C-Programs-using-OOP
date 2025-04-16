// Interesting Project
// Enter Your 8 Digit Roll. Number
// code extract first 2 digit from Roll. Number && Convert into Binary Format
// it checks the binary Number && count The Number of 0's
#include<iostream> 
using namespace std;
int num=0,l,f,l2,d,bin,f2,bl; 
int countZeros=0 ;
int countOnes=0 ; 
int first(int n); 
int last(int n); 
int digit(int x); 
int first2(int n);
void bin_c(int number); 
int dec_to_bin(int n); 
int lb(int n);

int main(){
cout<<"Enter Your SAP ID: "; 
a:
cin>>num; 
cout<<endl; 
d=digit(num); 
if(d!=8){
    cout<<"Invalid input!,Enter again: "; 
    goto a;
 
}
else{
    f=first(num); 
    l=last(num);
}
if(l%2==0 || l==0){
    l2 = num%100;
    bin = dec_to_bin(l2);
    cout<<endl<<"Binary Represantaion of last 2 Digits: "<<bin<<endl;
 
}
else{
    f2=first2(num);
    bin = dec_to_bin(f2);
    cout<<"Binary Represantaion of First 2 Digits: "<<bin<<endl;


}
bl=lb(bin); 
bin_c(bin);

if(bl){

    cout<<"Number of One's in Binary Representation: "<<countOnes<<endl;

}
else{
    cout<<"Number of Zero's in Binary Representation: "<<countZeros<<endl;
 
    
  }
return 0;
}
void bin_c(int number) {


while (number > 0) {
if (number % 10 == 0) { 
    countZeros++;
} else if (number % 10 == 1) { 
    countOnes++;
} else {
    cout << "Invalid binary number." << endl; 
    return;
}
number /= 10;

}
}
//int bin_c(int number) {
//
//	while (number > 0) {
//	if (number % 2 == 0) {
//	countZeros++;
//	} else if (number % 2 == 1) {
//	countOnes++;
//	}
//	number /= 2;
//	}
//
//}
int lb(int n){
    return n%2;
}

int digit(int x){ 
        int i=0; 
        while(x){
            x/=10; 
            i++;
        }  
       
return i;
}

int first(int n){
        while(n>=10){
            n/=10;
        }
return n;
}
int first2(int n){
        while(n>=100){
            n/=10;
        }  
return n;
}
int last(int n){
return n%10;
}
int dec_to_bin(int n){ 
    long long ans = 0; 
    int remainder, i = 1; 
    while(n!=0){
        remainder = n % 2; 
        ans += remainder*i; 
        i = i * 10;
        n = n / 2;
    }
return ans;
}
