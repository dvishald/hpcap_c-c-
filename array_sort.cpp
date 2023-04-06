#include<iostream>
using namespace std;
	int main()
	{
		 int ar[]={34,43,66,23,67,98};
		 
		 int temp=0;
		 
		 for(int i=0 ;i<sizeof(ar)/sizeof(int);i++)
		 {
		 	for(int j=i+1 ;j<sizeof(ar)/sizeof(int);j++)
		 	{
		 		if(ar[i]>ar[j])
		 		{
		 			temp= ar[i];
		 			ar[j]=ar[j];
		 			ar[j]=temp;
		 		}
		 	
		 	}
		 	cout<<"\n Array Element is\n "<<ar[i];
		 	
		 	
		 }
	}
