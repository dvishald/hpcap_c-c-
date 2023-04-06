#include<iostream>
#include<string.h>
using namespace std;


class person{
    public:
    char name[10];
    int age ;
    float salary;




void input()
{
	cout<< "Enter name";
	cin>>name;
	
	cout<< "Enter age";
	cin>>age;
	
	cout<< "Enter salary";
	cin>>salary;
}

};

int main()
{
		person p1;

	p1.input();
	
	cout<< p1.name <<" "<<p1.age<<" "<<p1.salary<<endl;
	
	return 0;
}
