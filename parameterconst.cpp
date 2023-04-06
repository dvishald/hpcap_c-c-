#include<iostream>
#include<string.h>
using namespace std;


class person{
    public:
    //char name[10];
    int age ;
    float salary;




void input()
{
	//cout<< "Enter name";
	//cin>>name;
	
	cout<< "Enter age";
	cin>>age;
	
	cout<< "Enter salary";
	cin>>salary;
	
}
	person(int ag,float sal)
	{
		age=ag;
		salary=sal;
	}
	
	person(){
   	 cout<<"constructor initialized"<<endl; 
    }


	

};

int main()
{


		person p1(389,50000);
	
	cout<< " "<<p1.age<<" "<<p1.salary<<endl;
	person p2;
	return 0;
}
