#include<iostream>
	
	using namespace std;
	
	void show(){
	cout<<"Hello World!"<<endl;
	}
	void show(char *name) {
	cout<<"Hello "<<name<<endl;
	}
	void show (char *name, int count) {
	for(int i=0; i<count; i++)
	cout<<"Hello "<<name<<endl;
	}
	
	int main() {
	char name[] = "Tejaa";
	show();
	show(name);
	show(name, 5);
	return 0;
	
	}
