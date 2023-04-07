#include <iostream>
using namespace std;


int main(){
int arr[100];



	

	for(int i=0;i<100;i++){
		arr[i]=rand()%100;

	}
	
	for(int i=0;i<100;i++){
		cout<< arr[i]<<endl;

	}
	
	cout<<"===========";
	for(int i=0;i<100;i++)
	{
		for(int j=i+1;j<100;j++){
		
		
		if(arr[i]+arr[j]==50){
			cout<<arr[i] <<" "<<arr[j]<<endl;
		}
	}
	
	}
	return 0;
		
}
