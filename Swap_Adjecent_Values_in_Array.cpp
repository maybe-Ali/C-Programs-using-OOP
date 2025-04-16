// Swap Each Numbers
// if Answer Match as before Input it displayed After value 
// Other wise, it show only swap element process
#include <iostream>
#include <utility> 
using namespace std;

int main(){
		int x=121;
		int temp=x;
       int digit=0,ans=0;
       cout<<"Before: "<<x<<endl;
        while(temp>0){
            digit = temp%10;
            cout<<digit<<endl;
            ans = (ans*10)+digit;
           
            temp=temp/10;
        }
        if(ans==x){
            cout<<"Value Swapped\nAfter: "<<ans;
        }else{
            return false;
        }
        

    

    return 0;
}

