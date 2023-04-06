// addition of numbers using pointers

#include<iostream>
#include<string.h>
	using namespace std;
	
	int main(){
	
		int a,
		b,
		*p1=&a,
		*p2=&b;
		cout<<"enter two numbers";
		cin>>a>>b;
		cout<<"addition is:"<<*p1+*p2<<endl;
		return 0;
		
	}
