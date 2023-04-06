//average of array numbers

#include<iostream>
	using namespace std;
	
	int main()
		{
			int arr[6];
			cout<<"enter elements"<<endl;
			for(int i=0; i<6;i++)
			{
			  cin>>arr[i];
				
			}
			int size=sizeof(arr)/sizeof(int);
			
				int sum=0;
				for(int i=0; i<6;i++)
				{
			  		sum+=arr[i];
				
				}
				
				float avg= sum/ size;
				
				cout<<" Avarage is :" <<avg;
				
				return 0;
		}	
