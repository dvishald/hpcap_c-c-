#include<iostream>
#include<string.h>
using namespace std;


class person{                      //class defination

    public:
    char name[10];
    int age ;
    float salary;
    
    void input();
    void show();          //function declaration


};

void person :: input()                 //function defination
{
	cout<< "Enter name"<<endl;
	cin>>name;
	
	cout<< "Enter age";
	cin>>age;
	
	cout<< "Enter salary"<<endl;
	cin>>salary;
}

	void person :: show()                      //function defination

	{
	
		cout<<"your data is "<<endl;
		
		cout<< name <<" "<<age<<" "<<salary<<endl;
	}



int main()
{
		person p1;
		
		p1.input();
		
		p1.show();
		
		return 0;
}
