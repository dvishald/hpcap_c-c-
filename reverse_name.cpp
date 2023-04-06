#include<iostream>
#include<string.h>
	using namespace std;
	
	int main(){
		char name[] ="Vishal";
		//cout<<"Enter the name :"<<endl;
		//cin>>name>>endl;
		cout<< "reverse name is"<<endl;
		for(int i= strlen(name)-1; i>=0;i--)
		{
			cout<<name[i];	
		
		}
		
	}
