
#include<iostream>
using namespace std;
int insertion(int arr[],int size,int element,int indx){	
	for(int i=size-1;i>=indx;i--){
		arr[i+1] = arr[i];
	}
	arr[indx] = element;	
}
void display(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	
	int arr[10] = {2,4,1,7,59,9,33,43};
	int size = 7;
	int element=39,indx=3;
	display(arr,size);
	int found = insertion(arr,size,element,indx);
	size+=1;
	display(arr,size);
	return 0;
}
