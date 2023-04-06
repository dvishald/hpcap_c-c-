#include<iostream>
#include<string.h>
	using namespace std;
	
	 int factorial(int a)
	 {
	 	int fact=1;
	 	 for (int i= a;i>1;i--)
		{
		 	fact= fact*i;
		 	
		 }
		 return fact;
	 }	
	
	int main()
	{	
		/*int num;
		cout<< "enter number"<<endl;
		cin>>num;
		int factorial=1;
		for (int i= num;i>1;i--)
		{
		 	factorial= factorial*i;
		 	
		 }
		 */
		 cout<< "factorials="<< factorial(5)<<endl;
		 
		 return 0;
	}
