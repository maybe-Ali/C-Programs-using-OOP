// Enter Numbers <= 10
// Enter Targeted Nu
// Enter Targeted Number (target_No. = 15)
// Reults : {6,9},{7,8},{8,7},{9,6}

#include<iostream>
using namespace std;
int main(){
int x[10],tar,opt,c;
bool l;
p:
cout<<"Enter Numbers (Limit 10 Numbers only): "<<endl;
for( int i=0 ; i<10 ;i++){
cin>>x[i];
}
cout<<"Enter Targeted Number: ";
cin>>tar;
for(int k=0;k<10;k++){
for(int u=0;u<10;u++){
if(x[k]+x[u]==tar){
c++;
cout<<"{"<<x[k]<<","<<x[u]<<"}"<<endl;
l=true;
}
}
}
if(!l){
cout<<"Target Number Not Found!"<<endl;
}
cout<<"Number Of Combinations:"<<c<<endl;
cout<<"Press 1 to Enter Numbers again:"<<endl;
cin>>opt;
if(opt){
goto p;
}
}